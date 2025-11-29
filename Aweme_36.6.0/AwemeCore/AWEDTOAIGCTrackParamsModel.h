@class NSString, NSDictionary;

@interface AWEDTOAIGCTrackParamsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *aigcBusinessTrackModel;
@property (copy, nonatomic) NSDictionary *aigcBusinessSubEventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
