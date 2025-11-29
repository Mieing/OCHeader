@class NSDictionary, NSString;

@interface IESLLGDImageActionInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *actionParams;
@property (copy, nonatomic) NSString *actionTypeString;
@property (readonly, nonatomic) long long actionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)actionTypeForString:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
