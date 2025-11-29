@class NSString, CoverInfo, MiniProgramInfo;

@interface QRButtonInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) MiniProgramInfo *jumpMiniprogram;
@property (retain, nonatomic) CoverInfo *coverInfo;

+ (void)initialize;

@end
