@class NSString, NSMutableArray;

@interface PacketFilterResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bakChatName;
@property (retain, nonatomic) NSString *msgDataId;
@property (retain, nonatomic) NSMutableArray *mediaInfoList;

+ (void)initialize;

@end
