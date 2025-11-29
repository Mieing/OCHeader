@class NSMutableDictionary, NSArray, NSData, NSString, OrderedDictionary;

@interface WCFinderGroupLiveChatHistoryModel : NSObject <PBCoding>

@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) OrderedDictionary *cacheChatHistoryDict;
@property (retain, nonatomic) NSMutableDictionary *tempClientIdAndSeqDict;
@property (retain, nonatomic) NSArray *cacheChatHistoryItemList;
@property (retain, nonatomic) NSArray *cacheChatHistoryItemKeyList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lastBuffer;
+ (void)PBArrayAdd_tempClientIdAndSeqDict;
+ (void)PBArrayAdd_cacheChatHistoryItemList;
+ (void)PBArrayAdd_cacheChatHistoryItemKeyList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
