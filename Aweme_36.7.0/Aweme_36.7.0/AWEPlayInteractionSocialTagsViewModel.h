@class NSMutableArray, AWEAwemeModel;

@interface AWEPlayInteractionSocialTagsViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *cellWidthList;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) double leftContainerWidth;

- (void)onSocialTagShow;
- (BOOL)updateTagConfigWithAwemeModel:(id)a0;
- (id)iconImageURLWithIndex:(long long)a0;
- (id)tagTextWithIndex:(long long)a0;
- (BOOL)shouldShowArrowWithIndex:(long long)a0;
- (id)schemaWithIndex:(long long)a0;
- (void)onSocialTagClickWithIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemWithIndex:(long long)a0;
- (void)__configCellSize;
- (void)trackSocialTagShowWithIndex:(long long)a0;
- (void)trackSocialTagClickWithIndex:(long long)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
