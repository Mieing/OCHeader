@class ACCAIGCUGCFusionSelectPopoverOption, UIColor, UIImageView, NSString, UILabel;
@protocol ACCAIGCUGCFusionSelectPopoverOptionViewDelegate;

@interface ACCAIGCUGCFusionSelectPopoverOptionView : UIView <ACCAIGCUGCFusionSelectPopoverOptionSelectDelegate>

@property (retain, nonatomic) ACCAIGCUGCFusionSelectPopoverOption *option;
@property (weak, nonatomic) id<ACCAIGCUGCFusionSelectPopoverOptionViewDelegate> delegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIColor *optionColor;
@property (retain, nonatomic) UIColor *optionPressColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapGestureFuction;
- (void)selectPopoverOptionSelectStateChanged:(id)a0;
- (id)initWithOption:(id)a0 withColor:(id)a1 withPressColor:(id)a2;
- (void)configOptionColor:(id)a0 withPressColor:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setup;

@end
