@class AWEDCFeedCellElementViewLayoutInfo;

@interface AWEDCFeedCellImageElementResourceConfig : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) Class customResourceClass;
@property (retain, nonatomic) AWEDCFeedCellElementViewLayoutInfo *layoutInfo;

- (void).cxx_destruct;
- (id)init;

@end
