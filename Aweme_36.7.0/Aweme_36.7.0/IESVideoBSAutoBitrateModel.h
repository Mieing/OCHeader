@class NSNumber, NSString;

@interface IESVideoBSAutoBitrateModel : MTLModel <MTLJSONSerializing, IESVideoBSConfigModelProtocol>

@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSNumber *minNetwork;
@property (retain, nonatomic) NSNumber *maxNetwork;
@property (retain, nonatomic) NSNumber *paramA;
@property (retain, nonatomic) NSNumber *paramB;
@property (retain, nonatomic) NSNumber *paramC;
@property (retain, nonatomic) NSNumber *paramD;
@property (retain, nonatomic) NSNumber *minBitrate;
@property (retain, nonatomic) NSString *curveName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)getBitrateCurveInfo;
- (void).cxx_destruct;

@end
