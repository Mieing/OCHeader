@class NSString;

@interface AWESSUCImageURLModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *lightURLString;
@property (copy, nonatomic) NSString *darkURLString;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
