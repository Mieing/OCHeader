@class NSString;

@interface IESAccountVerifyWayModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *verifyWay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
