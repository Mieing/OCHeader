@class NSString, AWENewsAISmartTrackBuildInputViewModel;

@interface AWENewsAISmartTrackBuildViewModel : NSObject <AWENewsAISmartTrackBuildContainerLifeCycle>

@property (retain, nonatomic) AWENewsAISmartTrackBuildInputViewModel *inputViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerWillAppear;
- (void)containerWillDisappear;
- (void)containerDidAppear;
- (void)containerDidDisappear;
- (void).cxx_destruct;

@end
