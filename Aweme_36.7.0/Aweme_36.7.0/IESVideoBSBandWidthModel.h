@class NSNumber, NSString;

@interface IESVideoBSBandWidthModel : MTLModel <MTLJSONSerializing, IESVideoBSConfigModelProtocol>

@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSNumber *minNetwork;
@property (retain, nonatomic) NSNumber *maxNetwork;
@property (retain, nonatomic) NSNumber *speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
