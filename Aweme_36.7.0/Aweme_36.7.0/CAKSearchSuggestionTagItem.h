@class NSString, NSArray, PHFetchResult;

@interface CAKSearchSuggestionTagItem : NSObject <CAKAlbumInsightItemData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *phAssetIDArray;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSString *coverAssetID;
@property (retain, nonatomic) PHFetchResult *fetchResult;

- (id)coverAssetId;
- (void).cxx_destruct;
- (id)assetIds;
- (id)title;

@end
