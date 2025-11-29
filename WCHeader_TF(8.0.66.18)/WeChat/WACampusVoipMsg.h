@class NSString, WACampusVoipUserInfo;

@interface WACampusVoipMsg : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long expireTime;
@property (nonatomic) long long msgId;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) long long debugMode;
@property (retain, nonatomic) NSString *roomType;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *pathBanner;
@property (retain, nonatomic) NSString *pathAnswer;
@property (retain, nonatomic) WACampusVoipUserInfo *userInfo;
@property (readonly, nonatomic) BOOL isVideoCall;
@property (nonatomic) BOOL isFromApns;
@property (nonatomic) long long receiveTime;
@property (nonatomic) long long createTime;
@property (nonatomic) long long styleType;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)intentUserInfos;
- (void).cxx_destruct;

@end
