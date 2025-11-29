@class UILabel, IESECStoreSelectButtonModel;
@protocol IESECShopSelectButtonViewDelegate;

@interface IESECShopSelectButtonView : UIView

@property (retain, nonatomic) IESECStoreSelectButtonModel *model;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) id<IESECShopSelectButtonViewDelegate> delegate;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;
- (void)tapAction;
- (void)changeStyle:(BOOL)a0;

@end
