@class NSString, MMListenSimplePlaylistInfo, MMListenJumpSchemeGetInfo, MMListenJumpFinderInfo, MMListenSimplePlayableInfo, MMListenJumpAppInfo;

@interface MMListenJumpInfo : WXPBGeneratedMessage

@property (nonatomic) int jumpType;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) MMListenJumpAppInfo *liteAppInfo;
@property (retain, nonatomic) MMListenJumpFinderInfo *finderInfo;
@property (retain, nonatomic) NSString *jumpWording;
@property (retain, nonatomic) MMListenSimplePlaylistInfo *simplePlaylistInfo;
@property (retain, nonatomic) MMListenJumpSchemeGetInfo *schemeGetInfo;
@property (retain, nonatomic) NSString *highlightDiscoverLineId;
@property (retain, nonatomic) MMListenSimplePlayableInfo *simplePlayableInfo;

+ (void)initialize;

@end
