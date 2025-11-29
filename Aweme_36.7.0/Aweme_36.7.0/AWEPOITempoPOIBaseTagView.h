@class UIView;

@interface AWEPOITempoPOIBaseTagView : UIView

@property (weak, nonatomic) UIView *exposeToView;
@property (copy, nonatomic) id /* block */ didTagExposureAction;
@property (copy, nonatomic) id /* block */ didTagTappedAction;

- (void)handleTagTapped;
- (BOOL)isMostlyVisible;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
