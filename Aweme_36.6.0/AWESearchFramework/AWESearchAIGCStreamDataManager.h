@class NSString, NSMutableSet, NSMutableDictionary;

@interface AWESearchAIGCStreamDataManager : NSObject <AWESearchAIGCStreamDataManagerProtocol>

@property (retain, nonatomic) NSMutableSet *allKeys;
@property (retain, nonatomic) NSMutableDictionary *messageData;
@property (nonatomic) BOOL notClearStreamDataCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readUnReadMsgForKey:(id)a0 markRead:(BOOL)a1;
+ (id)getAllMsgForKey:(id)a0;
+ (void)markReadCopilotWithDataList:(id)a0;
+ (id)readUnReadCopilotMsgForKey:(id)a0;
+ (void)markReadWithDataList:(id)a0;
+ (id)readUnReadCopilotMsgForKey:(id)a0 markRead:(BOOL)a1;
+ (id)readUnReadMsgForKey:(id)a0;

- (void)receiveStreamData:(id)a0 key:(id)a1 uniqueKey:(id)a2;
- (void)receiveStreamData:(id)a0 key:(id)a1;
- (id)getCacheStreamKeys;
- (void).cxx_destruct;
- (id)init;
- (void)clearData;
- (void)dealloc;

@end
