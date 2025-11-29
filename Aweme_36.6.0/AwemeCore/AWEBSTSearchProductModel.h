@class NSString, NSNumber, NSDictionary;

@interface AWEBSTSearchProductModel : AWETrackingServiceBSTBaseModel

@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) NSNumber *isAd;
@property (retain, nonatomic) NSNumber *originReport;
@property (copy, nonatomic) NSString *bstGroupType;
@property (retain, nonatomic) NSDictionary *searchParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
