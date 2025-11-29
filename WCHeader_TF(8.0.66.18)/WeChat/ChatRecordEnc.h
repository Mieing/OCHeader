@class NSData;

@interface ChatRecordEnc : WXPBGeneratedMessage

@property (nonatomic) unsigned long long encId;
@property (retain, nonatomic) NSData *encKey;
@property (nonatomic) unsigned long long createTimeMs;

+ (void)initialize;

@end
