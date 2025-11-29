@class UIView, NSString, MinimizeTaskData;

@interface WCFinderMultiContentData : NSObject <MinimizeTaskPlayCtrlDelegate>

@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (retain, nonatomic) UIView *animationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
