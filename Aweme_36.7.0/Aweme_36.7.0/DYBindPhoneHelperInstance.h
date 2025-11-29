@class NSString, NSDictionary;

@interface DYBindPhoneHelperInstance : NSObject <AWEUserMessage>

@property (copy, nonatomic) id /* block */ logoutHandler;
@property (copy, nonatomic) NSString *nextURL;
@property (copy, nonatomic) NSDictionary *trackerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserCommonAdapterClass;
+ (id)configNextURL:(id)a0 enterFrom:(id)a1;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)trackWithEventName:(id)a0 params:(id)a1;
- (id)aAWEUserCommonAdapter;
- (BOOL)handleBindProcessWithError:(id)a0 nextURL:(id)a1 logoutHandler:(id /* block */)a2 platform:(unsigned long long)a3 carrierString:(id)a4;
- (BOOL)handleBindProcessWithError:(id)a0 logoutHandler:(id /* block */)a1 platformTrackerString:(id)a2 carrierString:(id)a3;
- (BOOL)handleBindProcessWithError:(id)a0 logoutHandler:(id /* block */)a1 platformTrackerString:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
