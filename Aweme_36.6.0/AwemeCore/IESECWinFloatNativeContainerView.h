@class UIVisualEffectView, IESECRelationActivityDynamicComponentModel, UIView, UIImageView, UILabel;
@protocol IESECWinFloatNativeContainerViewDelegate;

@interface IESECWinFloatNativeContainerView : UIView

@property (retain, nonatomic) IESECRelationActivityDynamicComponentModel *model;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *textView;
@property (weak, nonatomic) id<IESECWinFloatNativeContainerViewDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)setupViews;
- (void)updateWithModel:(id)a0;
- (void)tapAction;

@end
