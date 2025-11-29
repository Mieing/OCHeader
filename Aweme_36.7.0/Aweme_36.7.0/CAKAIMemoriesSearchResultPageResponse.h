@class NSArray, CAKAlbumCollectionStruct;

@interface CAKAIMemoriesSearchResultPageResponse : NSObject

@property (retain, nonatomic) CAKAlbumCollectionStruct *collection;
@property (retain, nonatomic) NSArray *assetIDList;
@property (nonatomic) BOOL shouldGenerateCollection;

- (void).cxx_destruct;

@end
