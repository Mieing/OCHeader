@class NSArray, NSString;

@interface IESLiveECommerceInterceptor : NSObject <IESLiveTrackerDelegate>

@property (retain, nonatomic) NSArray *interceptList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (BOOL)isInlist:(id)a0;
- (void).cxx_destruct;

@end
