@class BgPagInfo, BgImgInfo;

@interface Background : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) BgPagInfo *pagInfo;
@property (retain, nonatomic) BgImgInfo *imgInfo;

+ (void)initialize;

@end
