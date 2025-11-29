@class NSNumber, NSString;

@interface AWEAdLightFeedBackGetAdConvertInfoResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *adID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *lynxRawData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
