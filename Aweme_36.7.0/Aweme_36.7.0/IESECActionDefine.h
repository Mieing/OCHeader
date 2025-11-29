@class NSString;

@interface IESECActionDefine : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *actionId;
@property (copy, nonatomic) NSString *actionMeta;
@property (copy, nonatomic) NSString *checkAction;
@property (copy, nonatomic) NSString *trackMeta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
