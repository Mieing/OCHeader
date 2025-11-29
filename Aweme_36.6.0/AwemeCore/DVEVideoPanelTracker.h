@class NSString, DVETrackPanelContext;
@protocol DVETrackEventProtocol;

@interface DVEVideoPanelTracker : NSObject

@property (weak, nonatomic) id<DVETrackEventProtocol> trackeventer;
@property (nonatomic) BOOL isSyncPage;
@property (retain, nonatomic) NSString *trackType;
@property (retain, nonatomic) NSString *materialType;
@property (nonatomic) double materialDuration;
@property (retain, nonatomic) NSString *orderType;
@property (retain, nonatomic) NSString *adjustType;
@property (retain, nonatomic) NSString *dragType;
@property (weak, nonatomic) DVETrackPanelContext *context;

- (void)updateTrackEventData:(id)a0;
- (void)updateAdjustType:(unsigned long long)a0;
- (void)trackEventAdjustDuration;
- (void)updateDragTypeWithOrginal:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 Current:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateOrderForVideo:(long long)a0 andCurrent:(long long)a1;
- (void)trackEventOrderVideo;
- (void)trackEventClickTransitionIcon;
- (void)trackEventSelectVideo;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
