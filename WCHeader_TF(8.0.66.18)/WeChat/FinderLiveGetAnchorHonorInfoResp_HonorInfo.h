@class NSString, FinderJumpInfo;

@interface FinderLiveGetAnchorHonorInfoResp_HonorInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *typeIcon;
@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

+ (void)initialize;

@end
