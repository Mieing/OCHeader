@class NSArray, NSString;

@interface IESIMEmojiStoreService : NSObject <IESIMEmojiStoreService>

@property (copy, nonatomic) NSArray *authorArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isEmojiPackageAddedWithPackageId:(id)a0;
- (void)deleteAddedPackage:(id)a0;
- (id)getDownloadedPackages;
- (BOOL)isEmojiPackageResourceDownloadedWithPackageId:(id)a0;
- (id)downloadedPackageWithIdentifier:(id)a0;
- (void)replacePackageInLocallyAddedList:(id)a0 completed:(id /* block */)a1;
- (void)insertPackageInLocallyAddedList:(id)a0 completed:(id /* block */)a1;
- (id)convertedInstalledEmoticonInfoModels;
- (void)downloadEmojiPackageWithPackageId:(id)a0 resourceUrl:(id)a1;
- (id)createEmojiPackageDetailVC;
- (void)addLocalDownloadedPackage:(id)a0;
- (id)animateStickerPathFromThemeID:(id)a0 sticker:(id)a1;
- (void)migrateUpdateThemeFiles;
- (void)handleStoreResponseWithPackages:(id)a0 error:(id)a1 reset:(BOOL)a2;
- (void)addEmojiPackages:(id)a0 completed:(id /* block */)a1;
- (void)deleteAIEmoticonModel:(id)a0 packageId:(id)a1 completed:(id /* block */)a2;

@end
