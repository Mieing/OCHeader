@class UILabel, UIView;
@protocol ACCRecorderViewContainer;

@interface AWERecordIMTipsUIComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *tipsWrapperView;

- (void)componentDidMount;
- (BOOL)p_shouldAddTipsView;
- (void)p_addTipsView;
- (id)p_tipsContent;
- (id)p_imModel;
- (void).cxx_destruct;

@end
