@class UIImage, NSString;

@interface AWEPOICommentVerifiedImageModel : NSObject

@property (retain, nonatomic) UIImage *commentImage;
@property (copy, nonatomic) NSString *commentImageUri;
@property (copy, nonatomic) NSString *commentImageURL;
@property (copy, nonatomic) NSString *commentImageBase64String;
@property (nonatomic) unsigned long long commentImageType;

- (void).cxx_destruct;

@end
