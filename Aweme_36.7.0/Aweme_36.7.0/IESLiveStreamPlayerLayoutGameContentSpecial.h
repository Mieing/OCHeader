@class NSDictionary, NSString;
@protocol IESLiveGameContentStreamLayoutService;

@interface IESLiveStreamPlayerLayoutGameContentSpecial : IESLiveStreamPlayerLayoutBase <IESLiveStreamPlayerLayoutMultiExtraPlayerProvider, IESLiveStreamPlayerLayoutGameContentSpecialTrackProvider>

@property (nonatomic) BOOL isInMultiExtraPlayer;
@property (retain, nonatomic) id<IESLiveGameContentStreamLayoutService> gameLayoutService;
@property (copy, nonatomic) NSDictionary *lastLayoutInfoForTrack;
@property (copy, nonatomic) NSString *effectedGameDisplayScene;
@property (nonatomic) BOOL externalBlock;
@property (nonatomic) unsigned long long bussinessType;
@property (copy, nonatomic) NSDictionary *strategyLayoutConfig;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } singleTargetContent;
@property (copy, nonatomic) NSDictionary *originMultiViewData;
@property (copy, nonatomic) NSDictionary *lastSeiMultiViewData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (void)didSetAttachingDIContext;
- (BOOL)isValidRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })streamSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentBounds;
- (BOOL)layoutWithMetaInfo:(id)a0;
- (BOOL)isPreMultiExtraPlayer;
- (BOOL)applyDealMultiExtraPlayerCrop;
- (struct CGSize { double x0; double x1; })getReservedSizeRatioWith:(struct CGSize { double x0; double x1; })a0;
- (void)multiExtraPlayerCropWith:(struct { id x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })multiExtraPlayerUnionFrame;
- (void)multiExtraPlayerVisibility:(BOOL)a0 level:(unsigned long long)a1;
- (void)closeMultiExtraPlayerCrop;
- (BOOL)isCGRectContainsNaN:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getPullData;
- (id)supportRoomScenes;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (id)rawPlayer;
- (BOOL)shouldUseCurrentLayoutType_multiExtraCrop;
- (BOOL)shouldUseCurrentLayoutType_singleDisplay;
- (BOOL)shouldUseInternalMultiExtraPlayerCrop;
- (BOOL)containsMultiViewData;
- (id)getUsedMultiViewData;
- (BOOL)shouldHandleInternalMultiExtraPlayerCropWith:(struct { id x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })a0;
- (void)cleanLayoutCache;
- (void)multiExtraCrop_layoutWithPreviousType:(unsigned long long)a0;
- (void)singleDisplay_layoutWithPreviousType:(unsigned long long)a0;
- (void)internalMultiExtraPlayerCropWith:(struct { id x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })a0 callTrace:(id)a1 complete:(id /* block */)a2;
- (BOOL)multiExtraCrop_layoutWithMetaInfo:(id)a0;
- (BOOL)singleDisplay_layoutWithMetaInfo:(id)a0;
- (void)updateGameDisplaySceneWith:(id)a0;
- (BOOL)shouldHandleCropDataWith:(struct { id x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })a0 isInternal:(BOOL)a1;
- (id)commonExtraInfo;
- (void)multiExtraCropRealLayoutWith:(id)a0 isInternal:(BOOL)a1;
- (void)multiExtraCropFailLayoutWithInternal:(BOOL)a0;
- (id)originalMultiViewStrData;
- (void)_destroyViceView:(id)a0;
- (void)_createViceViewBy:(id)a0;
- (BOOL)enableRandomSpecifyRatioWith:(id)a0 multiViewData:(id)a1;
- (void)internalSingleDisplayWith:(struct { id x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })a0 callTrace:(id)a1 complete:(id /* block */)a2;
- (void)singleDisplayRealLayoutWith:(id)a0 isInternal:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })mediaSize;
- (struct CGSize { double x0; double x1; })videoSize;

@end
