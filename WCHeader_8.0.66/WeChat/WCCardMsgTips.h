@class NSString;

@interface WCCardMsgTips : MMObject <PBCoding>

@property (nonatomic) unsigned int newCount;
@property (nonatomic) unsigned int lastUpdateTime;
@property (retain, nonatomic) NSString *nsTipWording;
@property (retain, nonatomic) NSString *nsTipIconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_newCount;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_nsTipWording;
+ (void)PBArrayAdd_nsTipIconUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)saveCardMsgTipsToCache;
- (void)loadCardMsgTipsFromCache;
- (id)pathForCardMsgTips;
- (void).cxx_destruct;

@end
