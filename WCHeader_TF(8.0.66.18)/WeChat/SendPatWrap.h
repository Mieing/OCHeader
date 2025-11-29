@class SendPatReportObject, NSString, PatWrap, PatSuffixWrap;

@interface SendPatWrap : NSObject

@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *pattedUserName;
@property (retain, nonatomic) NSString *chatUserName;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) PatWrap *patWrap;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) PatSuffixWrap *cachedPatSuffixWrap;
@property (nonatomic) unsigned int associateMessageLocalID;
@property (retain, nonatomic) SendPatReportObject *reportObject;

+ (id)chatUserNameFromMessageWrap:(id)a0;
+ (id)sendPatWrapFromMessageWrap:(id)a0;
+ (id)sendPatWrapKeyForPat:(id)a0 fromChat:(id)a1;

- (id)associateMessageWrap;
- (void)updatePatSuffix:(id)a0 andServerId:(long long)a1;
- (id)key;
- (id)messageWrapForRevokeOnly;
- (id)generateSystemMessage:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
