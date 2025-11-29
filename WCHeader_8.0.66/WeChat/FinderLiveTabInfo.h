@class NSString, NSMutableArray;

@interface FinderLiveTabInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int tabId;
@property (retain, nonatomic) NSString *tabName;
@property (nonatomic) BOOL prefechThisTab;
@property (nonatomic) BOOL prefechNextTab;
@property (nonatomic) BOOL prefechPreTab;
@property (nonatomic) BOOL playVoice;
@property (retain, nonatomic) NSMutableArray *subTabList;
@property (nonatomic) unsigned int tabScene;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *iconWording;
@property (retain, nonatomic) NSString *liveSquareIconUrl;
@property (retain, nonatomic) NSMutableArray *liveSquareWordingColor;

+ (void)initialize;

- (void)setLiveSquareWordingColor:(id)a0;
- (id)liveSquareWordingColor;
- (void)setLiveSquareIconUrl:(id)a0;
- (id)liveSquareIconUrl;
- (void)setIconWording:(id)a0;
- (id)iconWording;
- (void)setIconUrl:(id)a0;
- (id)iconUrl;
- (void)setObjectId:(unsigned long long)a0;
- (unsigned long long)objectId;
- (void)setTabScene:(unsigned int)a0;
- (unsigned int)tabScene;
- (void)setSubTabList:(id)a0;
- (id)subTabList;
- (void)setPlayVoice:(BOOL)a0;
- (BOOL)playVoice;
- (void)setPrefechPreTab:(BOOL)a0;
- (BOOL)prefechPreTab;
- (void)setPrefechNextTab:(BOOL)a0;
- (BOOL)prefechNextTab;
- (void)setPrefechThisTab:(BOOL)a0;
- (BOOL)prefechThisTab;
- (void)setTabName:(id)a0;
- (id)tabName;
- (void)setTabId:(unsigned int)a0;
- (unsigned int)tabId;

@end
