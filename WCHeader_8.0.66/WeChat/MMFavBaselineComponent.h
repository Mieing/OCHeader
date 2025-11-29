@class MMUIButton, NSString, UIImageView, FavAttributeCPLabel, FavActivityIndicatorView, NSMutableArray, MMUILabel;
@protocol MMFavCellComponentDelegate;

@interface MMFavBaselineComponent : MMComponent <IStrangerContactMgrExt, IFavoritesExt> {
    UIImageView *m_logoImgView;
    FavAttributeCPLabel *m_authorNameLabel;
    FavAttributeCPLabel *m_sourceNameLabel;
    MMUILabel *m_nameTailLabel;
    MMUILabel *m_timeLabel;
    MMUILabel *m_dataSizeLabel;
    MMUILabel *m_usedTimesLabel;
    NSMutableArray *m_tagList;
    MMUIButton *m_failButtom;
    FavActivityIndicatorView *m_activityIndicator;
    BOOL m_uploadStatusShowed;
    double m_leftOriginXForTags;
    NSMutableArray *m_tagBtnsArray;
    NSMutableArray *m_tagBtnTitles;
}

@property (weak, nonatomic) id<MMFavCellComponentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calHeightWithComData:(id)a0;
+ (BOOL)needShowTagList:(id)a0;
+ (double)computeHeightWith:(id)a0 WithOriginX:(double)a1 MaxOriginX:(double)a2 ComWidth:(double)a3 ComHeight:(double)a4;

- (void)configContentLayout;
- (void)configLabel;
- (void)layoutSeparatorLineWithOriginX:(double *)a0;
- (void)layoutSeparatorLineWithOriginX:(double *)a0 withOriginY:(double)a1;
- (double)layoutTags:(id)a0 WithOriginX:(double)a1 MaxOriginX:(double)a2;
- (double)realLayoutTagButtons:(id)a0 WithOriginX:(double)a1 MaxOriginX:(double)a2;
- (void)onClickBtn:(id)a0;
- (void)showFTSInfoInTimeLabel:(id)a0;
- (id)attachAuthorNameLabel:(id)a0;
- (void)reUpload;
- (void)setHighlightContent:(id)a0 Keywords:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)changeWidth:(double)a0;
- (void)onStrangerContactUpdated:(id)a0;
- (void).cxx_destruct;

@end
