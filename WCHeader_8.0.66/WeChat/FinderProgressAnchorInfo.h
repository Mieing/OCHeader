@class NSString;

@interface FinderProgressAnchorInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *anchorIconDesc;
@property (nonatomic) unsigned int anchorTime;
@property (nonatomic) BOOL isShowAnchorBubble;
@property (retain, nonatomic) NSString *uniqId;
@property (nonatomic) BOOL isAutoJump;

+ (void)initialize;

- (void)setIsAutoJump:(BOOL)a0;
- (BOOL)isAutoJump;
- (void)setUniqId:(id)a0;
- (id)uniqId;
- (void)setIsShowAnchorBubble:(BOOL)a0;
- (BOOL)isShowAnchorBubble;
- (void)setAnchorTime:(unsigned int)a0;
- (unsigned int)anchorTime;
- (void)setAnchorIconDesc:(id)a0;
- (id)anchorIconDesc;

@end
