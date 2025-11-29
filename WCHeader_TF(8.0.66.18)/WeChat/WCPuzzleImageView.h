@class WCDataItem, NSArray, UIImageView, UILabel, NSMutableArray;
@protocol WCPuzzleImageViewDelegate;

@interface WCPuzzleImageView : MMUIView <WCFacadeExt> {
    NSMutableArray *m_arrView;
    int m_visableCount;
    struct vector<bool, std::allocator<bool>> { unsigned long long *__begin_; unsigned long long __size_; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long __value_; } __cap_alloc_; } m_imageReady;
    UIImageView *m_lockStausView;
    UIImageView *m_sharedStausView;
    UIImageView *m_starredStatusView;
    UIImageView *m_livePhotoStatusView;
    UIImageView *m_failedStatusView;
    UIImageView *m_shadowImageView;
    UILabel *m_nickLabel;
}

@property (nonatomic) long long layoutStyle;
@property (readonly, nonatomic) NSArray *m_arrMediaData;
@property (weak, nonatomic) id<WCPuzzleImageViewDelegate> m_delegate;
@property (retain, nonatomic) WCDataItem *m_dataItem;

+ (id)getImageForMedia:(id)a0;

- (id)initWithMediaData:(id)a0 layoutStyle:(long long)a1;
- (void)setupShadowImageView;
- (void)updateShadowImageViewHiddenState;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutStatusView;
- (void)resetImages;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)showLockStatus:(BOOL)a0;
- (void)showSharedStatus:(BOOL)a0;
- (void)showStarredStatus:(BOOL)a0;
- (void)updateLivePhotoStatus:(BOOL)a0;
- (void)showFailedStatus:(BOOL)a0;
- (void)showOwnerNickname:(BOOL)a0 username:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
