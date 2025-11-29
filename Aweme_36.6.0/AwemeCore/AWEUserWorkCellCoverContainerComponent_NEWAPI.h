@class NSArray, AWEUserWorkCellVirtualImageView, NSString;

@interface AWEUserWorkCellCoverContainerComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellComponentProtocol, AWEUserWorkCellCoverImageViewProtocol>

@property (retain, nonatomic) NSArray *urlArray;
@property (nonatomic) long long imageRequestSentinel;
@property (retain, nonatomic) NSArray *subComponents;
@property (copy, nonatomic) id /* block */ setImageBlock;
@property (retain, nonatomic) AWEUserWorkCellVirtualImageView *imageViewContainerVirtualView;
@property (copy, nonatomic) id /* block */ virtualViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPostWorkViewControllerAdapterClass;
+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (id)coverImageView;
- (id)coverContainerView;
- (BOOL)shouldUseDynamicCover:(id)a0;
- (id)aAWEPostWorkViewControllerAdapter;
- (id)subComponentClassNames;
- (void)dynamicCoverSettingsChanged:(id)a0;
- (void)__updateImageBlockWith:(id)a0;
- (void)__trackCoverDownloadRate:(id)a0 url:(id)a1 error:(id)a2;
- (void)__trackCoverLoadResult:(id)a0 url:(id)a1 error:(id)a2;
- (void)setImageCompletionImageView:(id)a0 image:(id)a1 url:(id)a2 error:(id)a3;
- (void)setSpecialImageWithURLArray:(id)a0 imageView:(id)a1;
- (void)__changeAlpha:(double)a0;
- (BOOL)setSpecialImageBlockWithURLArray:(id)a0;
- (BOOL)__livePlaybackWith:(id)a0;
- (BOOL)__longVideoEpisodeWith:(id)a0;
- (BOOL)__selectCoverModelAIWith:(id)a0;
- (void)setImageWithImage:(id)a0 imageView:(id)a1;
- (void)setImageWithURLArray:(id)a0 imageView:(id)a1;
- (id)__tabName;
- (void)setCoverImageWithImageView:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;
- (void)dealloc;

@end
