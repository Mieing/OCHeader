@class NSString, NSData;

@interface PacketBackupDataPush : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *dataId;
@property (nonatomic) int dataType;
@property (nonatomic) int dataSize;
@property (nonatomic) int startOffset;
@property (nonatomic) int endOffset;
@property (nonatomic) int checkSum;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) int progress;

+ (void)initialize;

@end
