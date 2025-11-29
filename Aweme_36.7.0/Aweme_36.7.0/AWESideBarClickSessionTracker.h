@class NSString;

@interface AWESideBarClickSessionTracker : NSObject

@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *barID;
@property (copy, nonatomic) NSString *barTitle;
@property (copy, nonatomic) NSString *displayingSubtitleText;
@property (copy, nonatomic) NSString *moduleID;

- (id)initWithClickTrackModel:(id)a0;
- (void)didEnterSideBarVC;
- (void)didLeaveSideBarVC;
- (void).cxx_destruct;
- (id)description;

@end
