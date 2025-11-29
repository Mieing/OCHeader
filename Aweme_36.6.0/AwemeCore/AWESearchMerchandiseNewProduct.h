@class NSArray, NSNumber;

@interface AWESearchMerchandiseNewProduct : AWEBaseApiModel

@property (copy, nonatomic) NSArray *urlList;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
