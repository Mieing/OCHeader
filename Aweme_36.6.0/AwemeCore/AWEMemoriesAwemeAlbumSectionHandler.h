@class NSString;

@interface AWEMemoriesAwemeAlbumSectionHandler : NSObject <AWEMemoriesPlayerSectionHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldResponseWithMemoriesPlayerModel:(id)a0;
+ (id)createSectionViewModelWithMemoriesPlayerTileModels:(id)a0;
+ (id)createSectionTileModelsWithMemoriesPlayerModel:(id)a0;


@end
