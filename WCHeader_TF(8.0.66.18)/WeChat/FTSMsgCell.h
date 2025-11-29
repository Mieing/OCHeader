@class NSString, NSArray, MMHeadImageView, AttributeLabel, UIImage, FTSMsgItem, MMUILabel, FTSMsgCellStyle, MMImageView;

@interface FTSMsgCell : MMTableViewCell {
    FTSMsgItem *_msgItem;
    unsigned long long _mergeCount;
    NSString *_sessionUsername;
    MMHeadImageView *_headImageView;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
    AttributeLabel *_countLabel;
    MMUILabel *_timeLabel;
    MMUILabel *_prefixDetailLabel;
    MMImageView *_iconNamePostfix;
    MMUILabel *_labelNamePostfix;
    FTSMsgCellStyle *_cellStyleInfo;
    UIImage *m_defaultOpenimGroupIcon;
}

@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSArray *arrKeyword;
@property (nonatomic) BOOL hiddenMode;
@property (nonatomic) BOOL bGroupMemberMsg;
@property (nonatomic) unsigned long long cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 hiddenMode:(BOOL)a2;
- (void)initView;
- (void)initCellStyle;
- (void)updateCellStyle;
- (BOOL)isTrailSurrogates:(unsigned short)a0;
- (id)getDetailTextWithMsgWrap:(id)a0;
- (void)updateDetailTextAsMergeCount;
- (void)updateDetailTextAsMsgContent:(id)a0 sessionPrefix:(id)a1 highlighted:(BOOL)a2;
- (void)updateStatus:(BOOL)a0;
- (void)updateTimeLabel;
- (void)updateCountLabel;
- (void)updateMsgItem:(id)a0 withSessionUserName:(id)a1 searchText:(id)a2 keywords:(id)a3 mergeCount:(unsigned long long)a4;
- (void)updateIconNamePostfixWithContact:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
