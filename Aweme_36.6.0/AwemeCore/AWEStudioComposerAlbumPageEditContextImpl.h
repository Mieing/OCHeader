@class NSArray, CAKAlbumAssetModel, NSString;
@protocol ACCRepoDataContext;

@interface AWEStudioComposerAlbumPageEditContextImpl : NSObject <AWEStudioComposerAlbumPageEditContext>

@property (retain, nonatomic) CAKAlbumAssetModel *currentAsset;
@property (retain, nonatomic) NSArray *selectedAlbumAssets;
@property (retain, nonatomic) id<ACCRepoDataContext> editPageDataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
