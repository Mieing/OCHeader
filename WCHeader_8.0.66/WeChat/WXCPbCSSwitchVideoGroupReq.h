@class NSString;

@interface WXCPbCSSwitchVideoGroupReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int action;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *wxGroupId;
@property (nonatomic) unsigned int roomSdkmode;
@property (retain, nonatomic) NSString *screenSharingFileMd5;
@property (retain, nonatomic) NSString *screenSharingFileId;

+ (void)initialize;

@end
