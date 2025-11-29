@class NSNumber, NSString;

@interface IESVideoBSConfigModel : MTLModel <MTLJSONSerializing, IESVideoBSConfigModelProtocol>

@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSNumber *minNetwork;
@property (retain, nonatomic) NSNumber *maxNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
