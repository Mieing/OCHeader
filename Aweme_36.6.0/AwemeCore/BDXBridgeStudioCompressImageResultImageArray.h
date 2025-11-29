@class NSString, NSNumber;

@interface BDXBridgeStudioCompressImageResultImageArray : BDXBridgeModel

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
