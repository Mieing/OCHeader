@class NSString, NSMutableArray;

@interface QrCodeItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardId;
@property (nonatomic) unsigned int lowerBound;
@property (nonatomic) BOOL needInsertShowTimestamp;
@property (retain, nonatomic) NSString *showTimestampEncryptKey;
@property (nonatomic) unsigned int expireTimeInterval;
@property (nonatomic) unsigned int showExpireInterval;
@property (retain, nonatomic) NSMutableArray *qrCodeDataList;

+ (void)initialize;

@end
