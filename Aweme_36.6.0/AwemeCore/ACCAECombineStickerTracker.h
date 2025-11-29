@class NSString, DVETrackPanelContext;
@protocol DVETrackEventProtocol;

@interface ACCAECombineStickerTracker : NSObject

@property (weak, nonatomic) DVETrackPanelContext *context;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackEvent;
@property (copy, nonatomic) NSString *trackType;
@property (copy, nonatomic) NSString *materialType;
@property (copy, nonatomic) NSString *adjustType;
@property (copy, nonatomic) NSString *dragType;
@property (nonatomic) double materialDuration;

- (void)updateTrackEventData:(id)a0;
- (void)updateAdjustType:(unsigned long long)a0;
- (void)updateMaterialDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateDragTypeWithOrigMateriaDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)trackEventSelectSticker;
- (void)trackEventAdjustDuration;
- (void)trackEventEnterAutoCaptionEdit;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
