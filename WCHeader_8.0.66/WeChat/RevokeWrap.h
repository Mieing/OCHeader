@class NSString;

@interface RevokeWrap : NSObject <NSCopying>

@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int localId;
@property (nonatomic) long long serverId;
@property (nonatomic) BOOL isRead;
@property (nonatomic) BOOL canReEdit;
@property (retain, nonatomic) NSString *stringContent;
@property (retain, nonatomic) NSString *reEditStringContent;
@property (nonatomic) long long reEditReferMsgSvrId;
@property (retain, nonatomic) NSString *reEditAtUserList;
@property (nonatomic) unsigned int reEditServerTime;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqualToRevokeWrap:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)getDisplayContent;
- (void).cxx_destruct;

@end
