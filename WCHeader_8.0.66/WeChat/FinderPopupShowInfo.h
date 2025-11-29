@class FinderPopupShowInfo_ShowInfoItem, FinderPopupDisplayTimingConfig;

@interface FinderPopupShowInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderPopupShowInfo_ShowInfoItem *cardShowInfo;
@property (retain, nonatomic) FinderPopupShowInfo_ShowInfoItem *bubbleShowInfo;
@property (nonatomic) unsigned long long displayTabFlag;
@property (retain, nonatomic) FinderPopupDisplayTimingConfig *displayTiming;

+ (void)initialize;

- (void)setDisplayTiming:(id)a0;
- (id)displayTiming;
- (void)setDisplayTabFlag:(unsigned long long)a0;
- (unsigned long long)displayTabFlag;
- (void)setBubbleShowInfo:(id)a0;
- (id)bubbleShowInfo;
- (void)setCardShowInfo:(id)a0;
- (id)cardShowInfo;

@end
