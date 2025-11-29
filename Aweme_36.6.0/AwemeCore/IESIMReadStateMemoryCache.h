@class NSDictionary, NSString;

@interface IESIMReadStateMemoryCache : NSObject <IESIMReadStateItemCacheProtocol>

@property (retain) NSDictionary *readReceiptModelMap;
@property (retain, nonatomic) NSDictionary *allReadIndexMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uncachedIdentifiersInSet:(id)a0;
- (BOOL)saveReceiptModel:(id)a0;
- (void)saveReceiptModels:(id)a0;
- (id)readReceiptIdentifier:(id)a0;
- (void)p_unsafeSaveReceiptModel:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
