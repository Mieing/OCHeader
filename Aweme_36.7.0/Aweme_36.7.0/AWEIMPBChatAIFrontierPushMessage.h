@class NSString, NSData;

@interface AWEIMPBChatAIFrontierPushMessage : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *uniqueId;
@property (nonatomic) BOOL hasUniqueId;
@property (nonatomic) int packetCount;
@property (nonatomic) BOOL hasPacketCount;
@property (nonatomic) int packetIndex;
@property (nonatomic) BOOL hasPacketIndex;
@property (copy, nonatomic) NSString *checkMd5;
@property (nonatomic) BOOL hasCheckMd5;
@property (copy, nonatomic) NSData *message;
@property (nonatomic) BOOL hasMessage;

+ (id)descriptor;

@end
