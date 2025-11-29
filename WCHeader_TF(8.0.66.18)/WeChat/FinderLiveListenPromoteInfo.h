@class NSString, FinderLiveListenSpecialConfig, MMListenSimplePlaylistInfo;

@interface FinderLiveListenPromoteInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenSimplePlaylistInfo *playInfo;
@property (retain, nonatomic) NSString *bgImgUrl;
@property (nonatomic) BOOL isLike;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL needPreload;
@property (retain, nonatomic) FinderLiveListenSpecialConfig *spConfig;

+ (void)initialize;

@end
