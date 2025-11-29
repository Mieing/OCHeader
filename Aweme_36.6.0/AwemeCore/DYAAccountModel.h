@class NSString, NSDictionary, DYAAwemeAccountModel, DYAPassportAccountModel;
@protocol NSCoding, AWEPassportUser;

@interface DYAAccountModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) DYAPassportAccountModel *passportAccount;
@property (retain, nonatomic) DYAAwemeAccountModel *awemeAccount;
@property (retain, nonatomic) id<NSCoding, AWEPassportUser> businessModel;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, nonatomic) BOOL isNewUser;
@property (readonly, nonatomic) BOOL isValidAccount;
@property (readonly, nonatomic) BOOL isValidUid;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) long long userAuthStatus;
@property (nonatomic) double lastUpdateTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceForMigrateWithPassportAccount:(id)a0 awemeAccount:(id)a1 source:(id)a2;
+ (id)instanceWithPassportAccount:(id)a0 awemeAccount:(id)a1 source:(id)a2;
+ (id)instanceWithPassportAccountOnly:(id)a0 source:(id)a1;

- (void)updateWithBusinessModel:(id)a0 businessRawData:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
