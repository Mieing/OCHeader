@class UIView, WNSaveImageConfiguration, NSArray, MMTimer, MMTableView, WNContentStorage, NSMutableArray, NSMutableAttributedString, WNTextView, UITextPosition, WNSaveImageReportDataModel;
@protocol WNSaveImageLogicDataSource;

@interface WNSaveImageLogic : MMObject {
    id<WNSaveImageLogicDataSource> m_dataController;
    MMTableView *m_tableView;
    WNContentStorage *m_storage;
    BOOL *m_forceLoadImage;
    unsigned long long m_squareImagesCount;
    BOOL m_needReload;
    NSMutableArray *m_arrMaxFontSize;
    NSArray *m_currentSquareViews;
}

@property (retain, nonatomic) NSArray *arrDataSource;
@property (retain, nonatomic) UIView *currentLongNoteView;
@property (retain, nonatomic) NSMutableAttributedString *allContent;
@property (retain, nonatomic) WNSaveImageConfiguration *config;
@property (retain, nonatomic) WNSaveImageConfiguration *lastConfig;
@property (retain, nonatomic) WNSaveImageReportDataModel *reportData;
@property (nonatomic) BOOL bSquareImageEnable;
@property (retain, nonatomic) MMTimer *saveTimer;
@property (nonatomic) long long curIndex;
@property (nonatomic) double curOffset;
@property (retain, nonatomic) NSMutableArray *arrSaveImages;
@property (retain, nonatomic) WNTextView *curSaveView;
@property (retain, nonatomic) UITextPosition *lastSavePos;

- (void)setNoteViewController:(id)a0 withTableView:(id)a1 andStorage:(id)a2 andVisibHeight:(double)a3 andSquareHeight:(double)a4 andForceLoadImage:(BOOL *)a5;
- (void)recordCurrentStateNeedUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateImageType:(long long)a0 completion:(id /* block */)a1;
- (void)updateFontName:(long long)a0 completion:(id /* block */)a1;
- (void)updateBackgourndImage:(long long)a0 completion:(id /* block */)a1;
- (void)updateTextAlignment:(long long)a0 completion:(id /* block */)a1;
- (void)updateSelectedType:(long long)a0 atIndex:(long long)a1;
- (id)getHeaderView;
- (id)getNewFooterViewForIndex:(long long)a0 andImagesCount:(long long)a1;
- (id)getArrSelectedIndex;
- (long long)getCurrentMaxFontSize;
- (void)saveImage;
- (BOOL)currentForceLoadState;
- (void)disableForceLoadImage;
- (void)preCheckSquareImageEnable;
- (void)preCheckSquareImageEnableWithFont;
- (BOOL)getSquareImageEnable;
- (id)getLongNoteView;
- (id)getLongTableViewTextView:(double)a0;
- (void)beginSaveLongNoteImage;
- (void)saveImageThroughTimer;
- (void)continueSaveLongNoteImage;
- (void)saveLongNoteImage:(id)a0;
- (id)getSquareNoteViews;
- (id)getTableViewSquarePreview;
- (void)initNoteViewStateWith:(id)a0;
- (id)getSquareViewAttributedString;
- (id)getSquareViewFromAttributedString:(id)a0 needCheckMaxFontSize:(BOOL)a1;
- (void)checkMaxFontSize:(id)a0;
- (void)beginSaveSquareImage;
- (void)saveSquareImageThroughTimer;
- (void)continueSaveSquareImage;
- (void)saveSquareNoteImages:(id)a0;
- (id)creatRTETextViewForAttributedText:(id)a0;
- (id)creatRTETextViewForAttributedText:(id)a0 withProvider:(id)a1;
- (void)updateMutableAttributedString:(id)a0 withFont:(id)a1;
- (id)getRenderImageFromView:(id)a0;
- (id)getAttachmentViewProvider;
- (id)getAttachmentViewProviderWithImageType:(long long)a0 andColorType:(unsigned long long)a1;
- (BOOL)isInDarkMode;
- (void)startTimerWithInterval:(double)a0 andSelector:(SEL)a1;
- (void)stopTimer;
- (void)updateDefaultReportData:(unsigned int)a0 andSource:(unsigned long long)a1;
- (void)updateReportDataDownloadStatus:(unsigned long long)a0;
- (void)reportSaveResult:(unsigned long long)a0;
- (void)updateReportData:(int)a0;
- (void).cxx_destruct;

@end
