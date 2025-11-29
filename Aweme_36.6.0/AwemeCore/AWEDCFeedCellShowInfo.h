@class AWEAwemeModel;

@interface AWEDCFeedCellShowInfo : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) double showTime;
@property (nonatomic) double visiblePercent;

- (id)initWithShowTime:(double)a0 awemeModel:(id)a1;
- (id)initWithVisiblePercent:(double)a0 awemeModel:(id)a1;
- (void).cxx_destruct;

@end
