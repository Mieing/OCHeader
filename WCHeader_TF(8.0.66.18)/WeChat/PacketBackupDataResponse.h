@class NSString;

@interface PacketBackupDataResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *dataId;
@property (nonatomic) int dataType;
@property (nonatomic) int startOffset;
@property (nonatomic) int endOffset;
@property (nonatomic) int status;

+ (void)initialize;

@end
