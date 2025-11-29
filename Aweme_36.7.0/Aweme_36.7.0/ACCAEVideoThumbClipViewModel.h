@class NSString, NSValue, DVETrackPanelContext, NLETrackSlot_OC;
@protocol AEKMegaEditor;

@interface ACCAEVideoThumbClipViewModel : NSObject <AEKDiffChangeSubscriber>

@property (retain, nonatomic) DVETrackPanelContext *context;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (nonatomic) BOOL hasFilter;
@property (nonatomic) BOOL hasAdjust;
@property (nonatomic) BOOL isCurrent;
@property (readonly, weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) NSString *durationText;
@property (retain, nonatomic) NSValue *validCoverTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)diffResults:(id)a0 fromSource:(unsigned long long)a1;
- (void)setupObserver;
- (void)updateOnFilterChanged;
- (void)loadCoverWithCompletion:(id /* block */)a0;
- (void)updateValidCoverTime:(id)a0;
- (void)updateFilterStatus;
- (void)updateAdjustStatus;
- (id)initWithSlot:(id)a0 context:(id)a1 megaEditor:(id)a2 validCoverTime:(id)a3;
- (id)cachedCoverImage;
- (void).cxx_destruct;
- (id)thumbnail;

@end
