@class NSString, UIImage, PHAsset, CAKAlbumInsightSection;
@protocol CAKAlbumInsightItemData;

@interface CAKAlbumInsightItem : NSObject

@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) PHAsset *coverAsset;
@property (retain, nonatomic) id<CAKAlbumInsightItemData> data;
@property (nonatomic) long long type;
@property (readonly, nonatomic) NSString *title;
@property (weak, nonatomic) CAKAlbumInsightSection *section;

- (void)loadCoverImageIfNeeded;
- (void).cxx_destruct;
- (id)description;
- (id)initWithData:(id)a0;

@end
