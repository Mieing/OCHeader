@class AWEDCFeedCellElementViewLayoutInfo;

@interface AWEDCFeedCellImageElementResourceViewConfig : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEDCFeedCellElementViewLayoutInfo *layoutInfo;
@property (copy, nonatomic) id /* block */ customBlock;

- (void).cxx_destruct;
- (id)init;

@end
