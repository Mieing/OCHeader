@class NSString, NSDictionary;
@protocol HMDUITrackable;

@interface HMDUITrackableContext : NSObject

@property (weak, nonatomic) id<HMDUITrackable> trackable;
@property (retain, nonatomic) NSString *trackName;
@property (retain, nonatomic) NSDictionary *analysisInfo;
@property (nonatomic) long long trackableState;

- (void)trackableDidTrigger:(id)a0;
- (void)trackableEvent:(id)a0 info:(id)a1;
- (void)trackableDidLoad;
- (void)trackableWillAppear;
- (void)trackableDidAppear;
- (void)trackableWillDisappear;
- (void)trackableDidUnload;
- (void)trackableDidDisappear;
- (void)trackableDidSelectItemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
