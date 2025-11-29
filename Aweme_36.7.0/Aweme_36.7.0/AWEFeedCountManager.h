@class NSString, NSMutableDictionary;

@interface AWEFeedCountManager : NSObject <AWEFeedCountManagerProtocol>

@property (nonatomic) long long feedCount;
@property (nonatomic) long long currentFeedCount;
@property (retain, nonatomic) NSMutableDictionary *currentFeedCountTimeDictionary;
@property (readonly, nonatomic) long long maxFeedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateFormatter;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)showForModel:(id)a0;
- (void)resetFeedCount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
