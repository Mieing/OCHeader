@class NSString, FinderTipsShowInfo;

@interface FinderSyncTipsShowInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int showReddot;
@property (retain, nonatomic) FinderTipsShowInfo *showInfo;
@property (nonatomic) unsigned int showSeconds;
@property (nonatomic) unsigned long long tabTipsObjectId;
@property (retain, nonatomic) NSString *tipsId;

+ (void)initialize;

- (void)setTipsId:(id)a0;
- (id)tipsId;
- (void)setTabTipsObjectId:(unsigned long long)a0;
- (unsigned long long)tabTipsObjectId;
- (void)setShowSeconds:(unsigned int)a0;
- (unsigned int)showSeconds;
- (void)setShowInfo:(id)a0;
- (id)showInfo;
- (void)setShowReddot:(unsigned int)a0;
- (unsigned int)showReddot;

@end
