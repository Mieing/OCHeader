@class NSDictionary, NSString;

@interface IESECHeadVideoExtraInfoHeadVideoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long videoType;
@property (copy, nonatomic) NSDictionary *trackMeta;
@property (copy, nonatomic) NSDictionary *floatTrackMeta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
