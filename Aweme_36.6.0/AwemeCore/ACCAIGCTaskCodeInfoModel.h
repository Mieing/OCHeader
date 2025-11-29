@class NSString;

@interface ACCAIGCTaskCodeInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long aigcServerCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
