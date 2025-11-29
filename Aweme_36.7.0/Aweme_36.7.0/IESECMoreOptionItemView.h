@class NSString, UILabel, UIView, IESECUIImageView;
@protocol IESECMoreOptionItemProtocol;

@interface IESECMoreOptionItemView : UIView <IESECMoreOptionItemViewProtocol>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) id<IESECMoreOptionItemProtocol> item;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) IESECUIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bubbleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adaptLightStyle;
- (void)adaptRevertStyle;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (void)setupViews;
- (id)initWithItem:(id)a0 style:(unsigned long long)a1;
- (void)hideSeparator;

@end
