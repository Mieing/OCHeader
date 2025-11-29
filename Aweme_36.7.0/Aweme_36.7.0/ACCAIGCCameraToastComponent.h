@class UILabel;
@protocol ACCRecorderViewContainer;

@interface ACCAIGCCameraToastComponent : ACCFeatureComponent

@property (retain, nonatomic) UILabel *hintLabel;
@property (copy, nonatomic) id /* block */ dismissHintBlock;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;

- (void)componentWillAppear;
- (void)showHint:(id)a0;
- (id)createHintLabel;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;

@end
