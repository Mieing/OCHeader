@class NSString, NSNumber;
@protocol Optional;

@interface RTVVoipIndividualInfo : JSONModel

@property (copy, nonatomic) NSString<Optional> *token;
@property (copy, nonatomic) NSString<Optional> *appID;
@property (copy, nonatomic) NSString<Optional> *inviteFromUserID;
@property (retain, nonatomic) NSNumber<Optional> *voipStatus;
@property (copy, nonatomic) NSString<Optional> *liveCoreParams;
@property (copy, nonatomic) NSString<Optional> *rtcExtInfo;
@property (copy, nonatomic) NSString<Optional> *liveNeptuneCoreSetting;
@property (copy, nonatomic) NSString<Optional> *businessID;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
