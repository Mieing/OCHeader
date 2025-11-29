@class NSString;
@protocol AWEIMGroupExchangeDataManagerProtocol;

@interface AWEIMExchangeMediaModuleService : HTSService <AWEIMExchangeMediaProtocol, HTSService>

@property (retain, nonatomic) id<AWEIMGroupExchangeDataManagerProtocol> groupExchangeDataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (void).cxx_destruct;

@end
