@class NSString, NSMapTable;

@interface BDAROpenRewardManager : NSObject <BDAROpenRewardSessionDelegate>

@property (retain, nonatomic) NSMapTable *sessionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)openRewardSessionDidFinish:(id)a0;
- (void)createSessionWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
