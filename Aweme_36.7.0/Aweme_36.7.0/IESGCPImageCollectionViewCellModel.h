@class NSString;

@interface IESGCPImageCollectionViewCellModel : NSObject

@property (copy, nonatomic) NSString *preferredImageURL;
@property (copy, nonatomic) NSString *originImageURL;
@property (nonatomic) BOOL hasThumbImage;
@property (nonatomic) BOOL hasThumbHeifImage;

- (void).cxx_destruct;

@end
