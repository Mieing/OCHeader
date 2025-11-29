@class NSString, NSNumber;

@interface AWESearchMerchandiseCardBorderInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *color;
@property (retain, nonatomic) NSNumber *borderWidth;
@property (retain, nonatomic) NSNumber *borderRadius;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
