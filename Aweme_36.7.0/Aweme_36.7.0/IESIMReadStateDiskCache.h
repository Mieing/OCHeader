@class NSString;
@protocol IESIMStorageService;

@interface IESIMReadStateDiskCache : NSObject <IESIMReadStateItemCacheProtocol>

@property (retain, nonatomic) id<IESIMStorageService> storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uncachedIdentifiersInSet:(id)a0;
- (BOOL)saveReceiptModel:(id)a0;
- (void)saveReceiptModels:(id)a0;
- (id)readReceiptIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
