@class NSArray, IESLiveControllerVisibleModel;

@interface IESLiveControllerPageStates : NSObject

@property (nonatomic) BOOL isLiveVisible;
@property (retain, nonatomic) IESLiveControllerVisibleModel *topFullScreenPage;
@property (retain, nonatomic) NSArray *fullScreenPages;

- (void).cxx_destruct;

@end
