@class NSString, NSDictionary;

@interface IESIMGroupInviteCardOpenCapabilityModel : IESIMGroupOpenCapabilityModel

@property (nonatomic) BOOL sendXbridgeJoinGroupResultEvent;
@property (nonatomic) BOOL dontShowToast;
@property (nonatomic) BOOL needTransferToGroup;
@property (nonatomic) BOOL closeWhenJoinFail;
@property (nonatomic) BOOL enterGroupNoDisappear;
@property (nonatomic) BOOL needFloatMode;
@property (copy, nonatomic) NSString *customizedButtonTitle;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (copy, nonatomic) NSString *cid;
@property (nonatomic) long long secretType;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *tokenParams;
@property (copy, nonatomic) NSString *msgid;
@property (nonatomic) BOOL isFromEnterprise;
@property (nonatomic) BOOL isFromNearbyGroup;
@property (nonatomic) BOOL isEnterFromInterestGroupSearch;
@property (copy, nonatomic) NSString *joinGroupTrackParams;
@property (copy, nonatomic) NSDictionary *rawParams;
@property (retain, nonatomic) NSString *addParticipantsExt;
@property (copy, nonatomic) id /* block */ dismissBlock;

+ (id)optionalPropertyNameSet;

- (id)initWithBizLine:(long long)a0 bizScene:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
