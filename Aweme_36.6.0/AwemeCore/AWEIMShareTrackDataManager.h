@class NSString, NSMutableDictionary;

@interface AWEIMShareTrackDataManager : NSObject <IESIMShareTrackDataManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *indexDict;
@property (retain, nonatomic) NSMutableDictionary *recentTalkDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didSelectShareID:(id)a0 forOrder:(unsigned long long)a1;
- (void)removeAllOrder;
- (unsigned long long)orderOfShareID:(id)a0;
- (void)removeOrderOfShareID:(id)a0;
- (unsigned long long)recentTalkOrderOfShareID:(id)a0;
- (void)removeRecentTalkOrderOfShareID:(id)a0;
- (void)markShareID:(id)a0 forRecentTalkOrder:(unsigned long long)a1;
- (void)removeAllRecentTalkOrder;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
