@class NSString, MMListenJumpInfo;

@interface MMListenBannerInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL showArrow;
@property (retain, nonatomic) MMListenJumpInfo *jumpInfo;

+ (void)initialize;

@end
