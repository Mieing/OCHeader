@class NSString, NSArray, UIImage, AWEImageAlbumBSModel;

@interface AWESearchAIGCInputImageInfo : NSObject

@property (retain, nonatomic) UIImage *currentSelectedImage;
@property (copy, nonatomic) NSString *selectedImageTosID;
@property (copy, nonatomic) NSArray *selectedImageUrlList;
@property (nonatomic) unsigned long long uploadStatus;
@property (copy, nonatomic) NSString *searchSource;
@property (copy, nonatomic) NSString *picSource;
@property (copy, nonatomic) AWEImageAlbumBSModel *imageModel;

- (void).cxx_destruct;
- (void)reset;

@end
