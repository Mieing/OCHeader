@class UIImageView, UILabel;
@protocol IESECRelationTagsComponentProtocol;

@interface IESECWinAuthorSelfBuyingComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) id<IESECRelationTagsComponentProtocol> model;
@property (nonatomic) BOOL isSingleMode;

+ (id /* block */)buildFromSingleMode:(BOOL)a0;

- (void)clickAction;
- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
