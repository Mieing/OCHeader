@class NSString, NSNumber;

@interface IESGCPUploadGameCPImageUploadImageArrayModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *key;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
