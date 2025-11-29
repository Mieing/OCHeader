@class NSString;

@interface ACCVideoEditStickerRecommendTabDataController : ACCVideoEditStickerTabDataController

@property (copy, nonatomic) NSString *loadingZipURI;
@property (copy, nonatomic) NSString *zipURI;

- (id)cellIdentifierAtIndexPath:(id)a0;
- (id)cellIdentifiers;
- (Class)cellClassForIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldFetchData;

@end
