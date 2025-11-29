@class NSString, NSNumber, NSDictionary;

@interface AWEProfileSmartPhoneModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic) BOOL isSmartPhone;
@property (copy, nonatomic) NSString *phoneID;
@property (copy, nonatomic) NSString *phoneKey;
@property (copy, nonatomic) NSString *clueAccountID;
@property (retain, nonatomic) NSNumber *clueSceneType;
@property (copy, nonatomic) NSString *extraJsonString;
@property (copy, nonatomic) NSDictionary *abArgs;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
