@class NSString, NSDictionary, NSNumber;

@interface AWEAIGCResourceInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageKey;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSNumber *preferredLongResolution;
@property (retain, nonatomic) NSNumber *preferredShortResolution;
@property (copy, nonatomic) NSString *loraModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
