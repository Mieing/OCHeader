@class NSString;

@interface TingAudioRecordUploadCdnResult : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *cdnUrl;

+ (void)initialize;

@end
