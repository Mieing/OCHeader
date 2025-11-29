@class FinderObject;

@interface MegaVideoWatchLaterStateModParams : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObject *finderObject;
@property (nonatomic) int action;
@property (nonatomic) BOOL showTipsAfterSuc;
@property (nonatomic) BOOL tipsForbidJumpToLongVideo;
@property (nonatomic) BOOL disableTips;

+ (void)initialize;

@end
