@class NSString, IESLiveCommentStructurePanelConfig;

@interface IESLiveCommentPanelInnerConfiguration : NSObject

@property (retain, nonatomic) IESLiveCommentStructurePanelConfig *structureConfig;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) unsigned long long defaultEntryType;
@property (nonatomic) long long defaultEmojiType;
@property (copy, nonatomic) NSString *defaultComment;
@property (nonatomic) BOOL onlyChat;
@property (nonatomic) BOOL grayedOutDanmaku;
@property (copy, nonatomic) NSString *grayedOutDanmakuString;
@property (nonatomic) BOOL hideDanmakuSwitch;
@property (nonatomic) BOOL danmukuSwitchOn;
@property (copy, nonatomic) NSString *commentInterFlowTip;
@property (copy, nonatomic) NSString *pinCommentReplyHint;
@property (copy, nonatomic) NSString *paidDanmakuPriceHint;
@property (copy, nonatomic) NSString *placeHolderText;
@property (nonatomic) BOOL isLimitComment;
@property (nonatomic) BOOL disableActivityEmoji;
@property (nonatomic) BOOL disableFusionEmoji;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
