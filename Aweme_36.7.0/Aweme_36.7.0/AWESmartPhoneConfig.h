@class NSString, NSNumber, NSDictionary;

@interface AWESmartPhoneConfig : NSObject

@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *creativeID;
@property (retain, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSString *phoneKey;
@property (copy, nonatomic) NSString *positionTag;
@property (copy, nonatomic) NSDictionary *gscenario;
@property (copy, nonatomic) NSString *mKey;
@property (copy, nonatomic) NSString *customField;
@property (nonatomic) unsigned long long refer;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *dialogShowEvent;
@property (copy, nonatomic) NSString *dialogItemClickEvent;
@property (copy, nonatomic) NSString *secretNumDialogUrl;
@property (copy, nonatomic) NSDictionary *abArgs;
@property (copy, nonatomic) NSDictionary *extraRootParams;

- (id)initWithOriginAdModel:(id)a0;
- (BOOL)useSecretNumberDialog:(BOOL)a0;
- (id)secretNumberCustomField:(id)a0;
- (void).cxx_destruct;

@end
