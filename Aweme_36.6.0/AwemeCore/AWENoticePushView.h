@class AWENoticePushViewModel;

@interface AWENoticePushView : UIView

@property (retain, nonatomic) AWENoticePushViewModel *noticePushModel;

- (void)handleTapAction;
- (void)trackPushViewTagGesture;
- (void)trackEventSwipeGesDirectionUp;
- (void)trackEventShowPushModel:(id)a0 trackID:(id)a1;
- (void).cxx_destruct;

@end
