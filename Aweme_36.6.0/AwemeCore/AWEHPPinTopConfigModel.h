@class NSString, NSDictionary, NSNumber, AWEHPAttributeTextArrayModel;

@interface AWEHPPinTopConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *confirm;
@property (copy, nonatomic) NSString *cancel;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *subContent;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) long long triggerTime;
@property (retain, nonatomic) NSNumber *stayTime;
@property (retain, nonatomic) AWEHPAttributeTextArrayModel *richText;
@property (retain, nonatomic) NSDictionary *bizParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
