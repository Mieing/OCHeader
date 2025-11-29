@class AWEDCFeedPageContext, AWEAwemeModel;

@interface AWEDCFeedBaseCellElementViewModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) AWEDCFeedPageContext *context;

- (void)refreshWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
