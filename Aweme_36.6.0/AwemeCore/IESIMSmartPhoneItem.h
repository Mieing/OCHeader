@class NSString;

@interface IESIMSmartPhoneItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isSmartPhone;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *phoneID;
@property (copy, nonatomic) NSString *phoneKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
