@class NSMutableArray, AWELifeFeedsPageView;

@interface AWELifeFeedsLayoutTask : NSObject

@property (weak, nonatomic) AWELifeFeedsPageView *pageView;
@property (nonatomic) double sectionHeight;
@property (retain, nonatomic) NSMutableArray *layoutSectionList;
@property (nonatomic) BOOL didAutoLayoutForWidth;
@property (nonatomic) BOOL autoLayoutForWidth;

- (void)layoutBodyContainer:(id)a0;
- (void)tryAutoLayoutBlockNode:(id)a0 maxWidth:(double)a1;
- (void)setUpNodePosition:(id)a0 superBlockNode:(id)a1;
- (void)layoutPageView:(id)a0 pageViewModel:(id)a1;
- (void)addComponentNodeLayout:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
