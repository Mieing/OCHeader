@class NSString;

@interface AWESearchTransformOffsetModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *size;
@property (readonly, nonatomic) double offset;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
