@class NSString, NSDictionary;

@interface IESECLiveCardTrackConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *trackName;
@property (retain, nonatomic) NSDictionary *trackParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
