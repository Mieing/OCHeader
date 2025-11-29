@class YYDiskCache, NSMutableDictionary, NSString;

@interface AWEHotSearchCommentStorageManager : NSObject <AWEHotSearchCommentStorageManagerProtocol>

@property (class, readonly, nonatomic) YYDiskCache *diskStorage;
@property (class, readonly, nonatomic) NSMutableDictionary *removeComments;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanCommentsWithHotSpotID:(id)a0;
+ (void)addComment:(id)a0 hotSpotID:(id)a1;
+ (void)removeComment:(id)a0 hotSpotID:(id)a1;
+ (id)commentModelsHotSpotID:(id)a0;
+ (void)addRemovedComment:(id)a0 hotSpotID:(id)a1;
+ (BOOL)hasRecordHotSpotID:(id)a0;
+ (id)getStorageKey:(id)a0;
+ (BOOL)isCommentExpired:(id)a0;
+ (void)removeAllCommentHotSpotID:(id)a0;


@end
