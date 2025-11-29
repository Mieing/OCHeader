@class NSString;

@interface BDLHARService : NSObject <BDLHARServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getLastResultsDicOfRange:(long long)a0;
- (long long)getLastRangeMostIntStatus:(long long)a0;

@end
