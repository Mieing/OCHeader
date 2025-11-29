@class NSArray, AWECoCreatorModel, AWEAwemeModel, NSString, NSNumber, AWECoCreatorBaseViewController;

@interface AWECoCreatorPostListCellModel : NSObject <AWECoCreatorCellProtocol>

@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) long long awemeCount;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWECoCreatorModel *fromCoCreatorModel;
@property (weak, nonatomic) AWECoCreatorBaseViewController *viewController;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLargeCoActivity;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)cellHeight;

@end
