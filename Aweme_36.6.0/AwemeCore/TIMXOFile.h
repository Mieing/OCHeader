@class NSString, NSURL, NSDictionary;
@protocol TIMXFileModelProtocol;

@interface TIMXOFile : TIMXOModel <TIMXMessageStoreChangesObserver, TIMXNotifierDelegate>

@property (copy) NSString *identifier;
@property (copy) NSString *displayType;
@property long long status;
@property (copy) NSString *mimeType;
@property (copy) NSString *fileExtension;
@property long long fileSize;
@property (copy) NSString *md5;
@property float progress;
@property (copy) NSString *remotePath;
@property (copy) NSURL *localFileURL;
@property (retain) NSDictionary *ext;
@property (retain) id<TIMXFileModelProtocol> internalModel;
@property (retain) NSString *observerID;
@property (retain) NSString *fileObserverID;
@property (copy, nonatomic) NSString *encryptPath;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *algorithm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithRootObject:(id)a0 identifier:(id)a1;
+ (id)cachedInstanceWithRootObject:(id)a0 identifier:(id)a1;
+ (id)noCacheInstanceWithRootObject:(id)a0 dict:(id)a1 displayType:(id)a2;

- (void)onMessagesDeleted:(id)a0 belongingConversationMap:(id)a1 reason:(id)a2 context:(id)a3;
- (void)onFilesUpdated:(id)a0;
- (void)onFilesDeleted:(id)a0;
- (void)onConversationCleared:(id)a0;
- (id)initWithRootObject:(id)a0 model:(id)a1;
- (void)file:(id)a0 uploadProgressChangedTo:(float)a1;
- (void)file:(id)a0 downloadProgressChangedTo:(float)a1;
- (void)setUpWithModel:(id)a0;
- (void)applyAttributesFromModel:(id)a0;
- (void).cxx_destruct;
- (void)download;

@end
