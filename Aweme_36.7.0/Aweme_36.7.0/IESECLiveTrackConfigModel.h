@class NSString, NSDictionary;

@interface IESECLiveTrackConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (retain, nonatomic) NSDictionary *bcmTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
