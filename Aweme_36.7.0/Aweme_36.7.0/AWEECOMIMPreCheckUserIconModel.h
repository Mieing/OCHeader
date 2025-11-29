@class NSString, AWEECOMIMPreCheckUserIconActionModel;

@interface AWEECOMIMPreCheckUserIconModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL allowOperate;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL allowReplace;
@property (retain, nonatomic) AWEECOMIMPreCheckUserIconActionModel *actionModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
