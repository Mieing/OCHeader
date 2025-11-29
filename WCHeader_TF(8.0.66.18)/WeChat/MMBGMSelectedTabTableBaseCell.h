@class MMBGMSelectedTabTableViewCellConfig, MMBGMPanelPublishContext, MMBGMSelectedConfig;
@protocol MMBGMSelectedMusicDataProtocol, MMBGMSelectedTabTableViewCellDataReportSource;

@interface MMBGMSelectedTabTableBaseCell : UITableViewCell

@property (nonatomic) BOOL isCellSelected;
@property (nonatomic) unsigned long long sourceTabType;
@property (retain, nonatomic) id<MMBGMSelectedMusicDataProtocol> musicData;
@property (retain, nonatomic) MMBGMSelectedTabTableViewCellConfig *config;
@property (retain, nonatomic) MMBGMSelectedConfig *globalConfig;
@property (weak, nonatomic) id<MMBGMSelectedTabTableViewCellDataReportSource> dataReportSource;
@property (retain, nonatomic) MMBGMPanelPublishContext *publishContext;

+ (id)cellID;
+ (double)cellHeight;

- (void)configDataReport;
- (id)genReportDict;
- (unsigned long long)tabType;
- (id)searchWord;
- (void)updateWithMusicData:(id)a0 config:(id)a1 globalConfig:(id)a2 sourceTabType:(unsigned long long)a3;
- (BOOL)isPlayable;
- (id)panelConfig;
- (void).cxx_destruct;

@end
