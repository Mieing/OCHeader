@class NSString, MMUIView, MMWebImageView, UIView;
@protocol RecordNodeDataSource, FavImagePreViewDelegate;

@interface FavImagePreView : MMUIImageView <IRecordDownloadExt, IFavCdnDownloadMgrExt> {
    UIView *m_maskView;
    MMWebImageView *m_imgPreView;
    unsigned long long imageDataSize;
    MMUIView *m_imgvBack;
    MMUIView *m_imgvFront;
    unsigned int m_progressLength;
    BOOL m_bIsImageExit;
    BOOL m_bIsSourceImg;
    BOOL m_bIsLongPressHandled;
}

@property (retain, nonatomic) id<RecordNodeDataSource> dataSource;
@property (weak, nonatomic) id<FavImagePreViewDelegate> m_delegate;
@property (retain, nonatomic) NSString *m_imageLocalPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })GetPreSizeByRecordDataSource:(id)a0;
+ (struct CGSize { double x0; double x1; })GetPreSizeByRecordDataSource:(id)a0 maxWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })GetPreSizeByImageSize:(struct CGSize { double x0; double x1; })a0 maxWidth:(double)a1;
+ (id)generatePreImgPathByImgPath:(id)a0;

- (void)dealloc;
- (id)initWithDataSource:(id)a0;
- (void)startLoadImage;
- (void)startLoadImageWithMaxWidth:(double)a0;
- (void)initData;
- (void)LongPressEvents;
- (void)pressedEvents;
- (void)onBeginLongPress;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)onLongTouch;
- (void)onTouchCancel;
- (void)OnLongPressFavImage;
- (void)windowHide:(id)a0;
- (void)onClickFavImage;
- (void)showMaskView;
- (void)hideMaskView;
- (id)compressImage:(id)a0;
- (id)getPreviewImage;
- (void)startLoadImageWithGCD;
- (void)initProgressView;
- (void)updateProgressFinishedLength:(unsigned long long)a0 TotalLength:(unsigned long long)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)OnFavCdnDownload:(id)a0 TotalLength:(unsigned long long)a1 FinishLength:(unsigned long long)a2;
- (void)OnFavCdnDownload:(id)a0 RetCode:(int)a1;
- (void)OnDownloadRecordMessageOK:(id)a0 DataId:(id)a1 bThumb:(BOOL)a2;
- (void)OnDownloadRecordMessagePart:(id)a0 DataId:(id)a1 PartLen:(unsigned int)a2 TotalLen:(unsigned int)a3;
- (void).cxx_destruct;

@end
