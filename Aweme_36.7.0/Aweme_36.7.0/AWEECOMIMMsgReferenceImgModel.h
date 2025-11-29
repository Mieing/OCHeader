@class NSString;

@interface AWEECOMIMMsgReferenceImgModel : AWEECOMIMMsgReferenceModel

@property (nonatomic) double imgWidth;
@property (nonatomic) double imgHeight;
@property (copy, nonatomic) NSString *thumbnailImgURLString;
@property (copy, nonatomic) NSString *originalImgURLString;

- (void).cxx_destruct;
- (id)init;

@end
