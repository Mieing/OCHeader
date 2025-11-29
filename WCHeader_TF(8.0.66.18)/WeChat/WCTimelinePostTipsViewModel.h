@class WCDataItem, NSString;

@interface WCTimelinePostTipsViewModel : NSObject

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) long long tipsViewType;
@property (nonatomic) double viewWidth;
@property (retain, nonatomic) NSString *postTips;

- (id)initWithDataItem:(id)a0;
- (void)updateWithDataItem:(id)a0;
- (void).cxx_destruct;

@end
