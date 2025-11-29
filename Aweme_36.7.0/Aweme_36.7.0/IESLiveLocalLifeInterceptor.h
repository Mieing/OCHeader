@class NSArray, NSString;

@interface IESLiveLocalLifeInterceptor : NSObject <IESLiveTrackerDelegate>

@property (retain, nonatomic) NSArray *interceptList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (void)rebuildLifeExtraInfoParams:(id)a0;
- (BOOL)isInLifeCartList:(id)a0;
- (BOOL)isInEnvList:(id)a0;
- (id)lifeCartInterceptList;
- (id)envInterceptList;
- (void).cxx_destruct;

@end
