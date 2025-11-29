@class NSString, NSNumber, NSDictionary;

@interface IESIMSmartPhoneConfig : NSObject

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
@property (nonatomic) long long refer;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *dialogShowEvent;
@property (copy, nonatomic) NSString *dialogItemClickEvent;
@property (copy, nonatomic) NSDictionary *extraRootParams;

- (void).cxx_destruct;

@end
