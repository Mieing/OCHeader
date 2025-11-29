@class LVMinimizeReportInfo, WCFinderSimplePlayerView;
@protocol ILVMinimizeContextModel;

@interface LVMinimizeContext : NSObject

@property (nonatomic) BOOL isPlayEndReported;
@property (nonatomic) BOOL isPlayFinished;
@property (retain, nonatomic) id<ILVMinimizeContextModel> viewModel;
@property (retain, nonatomic) WCFinderSimplePlayerView *playerView;
@property (retain, nonatomic) LVMinimizeReportInfo *reportInfo;

- (id)feedId;
- (BOOL)isFlutterPlayer;
- (id)description;
- (void).cxx_destruct;

@end
