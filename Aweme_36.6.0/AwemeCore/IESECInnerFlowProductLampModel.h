@class NSString;

@interface IESECInnerFlowProductLampModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *lampMessage;
@property (nonatomic) long long lampType;
@property (copy, nonatomic) NSString *userName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
