@class NSString, AWELandScapeGuideView;

@interface AWELandscapeNextEpisodeGuide : AWELandscapeBaseGuide <AWELandscapeGuideProtocol>

@property (retain, nonatomic) AWELandScapeGuideView *guideView;
@property (nonatomic) BOOL isFromLongVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (id)initWithTargetView:(id)a0 isFromLongVideo:(BOOL)a1 pageContext:(id)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (long long)priority;
- (id)identifier;
- (BOOL)show;

@end
