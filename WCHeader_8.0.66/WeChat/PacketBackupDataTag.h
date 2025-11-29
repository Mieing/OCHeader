@class NSString, NSMutableArray;

@interface PacketBackupDataTag : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bakChatName;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) NSString *msgDataId;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSMutableArray *mediaIdlist;

+ (void)initialize;

@end
