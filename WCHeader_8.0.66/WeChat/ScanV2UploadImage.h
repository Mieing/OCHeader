@class BizAiScanCdnImg, NSMutableArray, NSData;

@interface ScanV2UploadImage : WXPBGeneratedMessage

@property (retain, nonatomic) BizAiScanCdnImg *cdnImg;
@property (retain, nonatomic) NSMutableArray *markInfos;
@property (retain, nonatomic) NSData *imgData;

+ (void)initialize;

@end
