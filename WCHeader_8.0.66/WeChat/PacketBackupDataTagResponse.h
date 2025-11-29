@class NSString;

@interface PacketBackupDataTagResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bakChatName;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) NSString *msgDataId;

+ (void)initialize;

@end
