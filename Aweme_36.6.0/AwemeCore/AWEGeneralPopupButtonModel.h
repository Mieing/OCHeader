@class NSString;

@interface AWEGeneralPopupButtonModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long actionType;
@property (readonly, copy, nonatomic) NSString *actionTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleJSONTransformer;
+ (id)actionTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
