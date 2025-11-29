@class NSString;

@interface AWEEcomSearchUIComponent : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *componentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeStackView:(id)a0;
+ (id)decorateView:(id)a0 model:(id)a1;
+ (id)makeImageViewWith:(id)a0;
+ (id)makeTextLabelWith:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
