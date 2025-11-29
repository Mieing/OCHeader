@class NSString, FinderStreamDivider_BubbleInfo, FinderStreamJumpInfo;

@interface FinderStreamDivider : WXPBGeneratedMessage <WCFinderFeedArrayConvert>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int insertBeforeIndex;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int uiStyle;
@property (nonatomic) unsigned long long layoutId;
@property (retain, nonatomic) FinderStreamJumpInfo *jumpInfo;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) FinderStreamDivider_BubbleInfo *bubbleInfo;

+ (id)feedArrayConvertTidFromObject:(id)a0;
+ (id)feedArrayConvertVMFromItem:(id)a0 scene:(int)a1;
+ (void)initialize;

- (void)setBubbleInfo:(id)a0;
- (id)bubbleInfo;
- (void)setIconUrl:(id)a0;
- (id)iconUrl;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;
- (void)setLayoutId:(unsigned long long)a0;
- (unsigned long long)layoutId;
- (void)setUiStyle:(unsigned int)a0;
- (unsigned int)uiStyle;
- (void)setWording:(id)a0;
- (id)wording;
- (void)setInsertBeforeIndex:(unsigned int)a0;
- (unsigned int)insertBeforeIndex;

@end
