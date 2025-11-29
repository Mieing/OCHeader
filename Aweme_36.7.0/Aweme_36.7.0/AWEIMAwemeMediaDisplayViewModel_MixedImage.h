@class NSArray, AWEIMMixImageMessage, NSTimer;

@interface AWEIMAwemeMediaDisplayViewModel_MixedImage : NSObject

@property (retain, nonatomic) AWEIMMixImageMessage *message;
@property (retain, nonatomic) NSArray *imageModels;
@property (retain, nonatomic) NSArray *previewImageModels;
@property (nonatomic) BOOL progressPreviewEnabled;
@property (nonatomic) BOOL cyclePlayAnimatedEnabled;
@property (nonatomic) BOOL autoPlayEnabled;
@property (retain, nonatomic) NSTimer *playTimer;
@property (nonatomic) double autoPlayTimeInterval;
@property (nonatomic) BOOL speedUpEnabled;

- (void)trackPageShow;
- (void)p_configImageUseOrigin;
- (void)tryStartTimerWithTimeInterval:(double)a0 weakTarget:(id)a1 selector:(SEL)a2 repeats:(BOOL)a3;
- (void)tryStopPlayTimer;
- (long long)adjustedPageIndexWithPageIndex:(long long)a0;
- (double)adjustedContentOffsetXWithPageIndex:(long long)a0 cellWidth:(double)a1;
- (long long)adjustedPageIndexWithContentOffsetX:(double)a0 cellWidth:(double)a1;
- (BOOL)imageDataAvailableAtPageIndex:(long long)a0;
- (BOOL)canSaveImageByMessageType;
- (id)modelAtPageIndex:(long long)a0;
- (id)infoButtonTitle;
- (void)configImageUseOrigin;
- (void)configPreviewImage;
- (void)transferToMixDetailInfoPage;
- (id)modelAtCellIndex:(long long)a0;
- (long long)p_adjustedCount;
- (long long)p_adjustedModelIndexWithCellIndex:(long long)a0;
- (long long)p_adjustedPageIndexWithPageIndex:(long long)a0;
- (long long)p_adjustedModelOffset;
- (long long)p_adjustedIndexWithIndex:(long long)a0 count:(long long)a1;
- (void)p_configPreviewImage;
- (void)p_transferToMixDetailInfoPage;
- (void).cxx_destruct;
- (long long)numberOfImages;
- (long long)numberOfCells;
- (id)initWithMessage:(id)a0;

@end
