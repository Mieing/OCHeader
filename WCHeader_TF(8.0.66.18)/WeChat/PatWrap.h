@class NSString;

@interface PatWrap : NSObject <NSCopying>

@property (retain, nonatomic) NSString *templete;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *pattedUserName;
@property (nonatomic) unsigned long long createTime;
@property (nonatomic) long long serverId;
@property (nonatomic) BOOL isRead;
@property (nonatomic) BOOL showChangeSuffixRemind;
@property (readonly, nonatomic, getter=isEmphasize) BOOL emphasize;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)templateFromTemplate:(id)a0 fromUserName:(id)a1 pattedUserName:(id)a2;
+ (id)generateContentWithTemplate:(id)a0 chatContact:(id)a1 showLink:(BOOL)a2 showTextStateIcon:(BOOL)a3 showHighlightPat:(BOOL)a4 showChangeSuffixRemind:(BOOL)a5;
+ (id)getContactFromUserName:(id)a0;

- (id)getDisplayContentWithChatUserName:(id)a0 configuration:(id)a1;
- (id)getAttributedDisplayContentWithChatUserName:(id)a0 configuration:(id)a1;
- (BOOL)canRevoke;
- (BOOL)isSender;
- (id)clientMessageId;
- (id)contentId;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqualToPatWrap:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
