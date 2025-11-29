@class NSString;

@interface AWEDTOAIGCLoadStatusModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *loadstatus;
@property (copy, nonatomic) NSString *imagePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
