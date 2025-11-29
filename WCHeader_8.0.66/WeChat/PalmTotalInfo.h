@class PalmFile, PalmMd5Info;

@interface PalmTotalInfo : WXPBGeneratedMessage

@property (retain, nonatomic) PalmFile *palmFile;
@property (retain, nonatomic) PalmMd5Info *palmMd5Info;

+ (void)initialize;

@end
