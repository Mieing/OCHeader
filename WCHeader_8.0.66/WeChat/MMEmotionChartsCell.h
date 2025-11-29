@class NSString, MMEmoticonStoreDownloadLogic, MMWebImageView, EmoticonStoreItem, UILabel;
@protocol MMEmotionChartsCellDelegate;

@interface MMEmotionChartsCell : MMUIView <MMEmoticonStoreDownloadLogicDelegate> {
    int _type;
    int _scene;
}

@property (retain, nonatomic) NSString *m_storeSession;
@property (retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic;
@property (retain, nonatomic) EmoticonStoreItem *m_storeItem;
@property (retain, nonatomic) MMWebImageView *m_iconImageView;
@property (retain, nonatomic) UILabel *m_nameLabel;
@property (retain, nonatomic) UILabel *m_inroduceLabel;
@property (nonatomic) BOOL m_freeToDownload;
@property (nonatomic) BOOL m_showBlackLine;
@property (nonatomic) double m_cellHeight;
@property (weak, nonatomic) id<MMEmotionChartsCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setScene:(int)a0 andType:(int)a1;
- (void)initStoreSession:(id)a0 StoreItem:(id)a1 ShouldShowBlackLine:(BOOL)a2 CellHeight:(double)a3;
- (void)layoutSubviews;
- (void)loadIconImageView;
- (void)loadNameLabel;
- (void)loadIntroduceLabel;
- (void)loadDownloadView;
- (void)loadSubView;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)a0;
- (id)downloadLogicReportInfo;
- (double)downloadViewMaxWidth;
- (void).cxx_destruct;

@end
