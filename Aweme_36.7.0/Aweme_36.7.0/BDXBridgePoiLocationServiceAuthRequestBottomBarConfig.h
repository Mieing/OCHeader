@class NSString, NSNumber;

@interface BDXBridgePoiLocationServiceAuthRequestBottomBarConfig : BDXBridgeModel

@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSString *actionText;
@property (retain, nonatomic) NSNumber *bottomOffset;
@property (retain, nonatomic) NSNumber *dismissTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
