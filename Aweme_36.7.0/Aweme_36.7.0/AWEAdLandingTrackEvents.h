@class AWEAdLandingEvent, NSString, AWEAwemeModel;

@interface AWEAdLandingTrackEvents : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAdLandingEvent *pageview;
@property (retain, nonatomic) AWEAdLandingEvent *closeButtonTapped;
@property (retain, nonatomic) AWEAdLandingEvent *reportButtonTapped;
@property (retain, nonatomic) AWEAdLandingEvent *backgroundTapped;
@property (retain, nonatomic) AWEAdLandingEvent *draggingDownDismissal;
@property (retain, nonatomic) AWEAdLandingEvent *draggingRightDismissal;
@property (copy, nonatomic) NSString *renderType;

+ (id)closeLabelWithModel:(id)a0;
+ (id)tagName;

- (id)initWithAweme:(id)a0;
- (void).cxx_destruct;

@end
