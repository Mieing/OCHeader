@class AWEAwemeModel;
@protocol AWEFeedTableViewCellViewControllerProtocol;

@interface AWEDetailCellPlayTimeData : NSObject

@property (retain, nonatomic) id<AWEFeedTableViewCellViewControllerProtocol> detailCellViewController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) double playTime;
@property (nonatomic) double canPlayTime;
@property (nonatomic) double totalTime;

- (void).cxx_destruct;

@end
