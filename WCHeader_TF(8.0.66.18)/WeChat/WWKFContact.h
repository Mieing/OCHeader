@class NSString, COpenIMInfo;

@interface WWKFContact : NSObject

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *bigAvatarUrl;
@property (retain, nonatomic) NSString *smallAvatarUrl;
@property (retain, nonatomic) NSString *nickNameJianPin;
@property (retain, nonatomic) NSString *nickNameQuanPin;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) COpenIMInfo *openIMInfo;
@property (copy, nonatomic) NSString *headImgStatus;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned long long settingFlag;
@property (nonatomic) BOOL needLocation;
@property (retain, nonatomic) NSString *locationType;
@property (nonatomic) unsigned int lastUpdateTime;

+ (id)contactWithOpenIMKefuContact:(id)a0;

- (id)init;
- (id)description;
- (id)toCContact;
- (void).cxx_destruct;

@end
