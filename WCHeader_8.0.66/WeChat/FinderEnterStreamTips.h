@class NSString, FinderEnterStreamTipsBypassInfo, FinderJumpInfo, NSMutableArray;

@interface FinderEnterStreamTips : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) unsigned int endTs;
@property (retain, nonatomic) NSMutableArray *allowedCommentScene;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned int streamTipType;
@property (retain, nonatomic) FinderEnterStreamTipsBypassInfo *bypassInfo;

+ (void)initialize;

@end
