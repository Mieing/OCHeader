@class OrderedDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MMAssetMessageUUIDMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) OrderedDictionary *assetIDToMessageUUIDMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getPathOfMessageUUIDCache;

- (void)onServiceInit;
- (void)asyncSetMessageUUID:(id)a0 forAssetID:(id)a1;
- (id)messageUUIDForAssetID:(id)a0;
- (id)decodeOrCreateAssetIDToMessageUUIDMapFromFile:(id)a0;
- (void)encodeAssetIDToMessageUUIDMap:(id)a0 toFilePath:(id)a1;
- (void).cxx_destruct;

@end
