@class NSString;

@interface AWEMessageReachNativeDialogButtonDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (nonatomic) long long countDown;
@property (nonatomic) long long actionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isEqualDataModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
