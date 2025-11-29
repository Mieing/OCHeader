@class NSString, NSArray, IssueCategory, NSMutableArray, IssueCategoryV2;
@protocol IESLiveRevenueInteractFeedbackAPI, IESLiveRevenueInteractFeedbackListModel;

@interface IESLiveRevenueInteractFeedbackViewModel : NSObject

@property (nonatomic) BOOL selectedWillNotPKAgain;
@property (retain, nonatomic) id<IESLiveRevenueInteractFeedbackAPI> feedbackAPI;
@property (copy, nonatomic) id /* block */ baseParamsBlock;
@property (copy, nonatomic) id /* block */ extraParamsBlock;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *trackSource;
@property (copy, nonatomic) NSString *categoryTitle;
@property (retain, nonatomic) id<IESLiveRevenueInteractFeedbackListModel> listModel;
@property (nonatomic) BOOL contentEditing;
@property (copy, nonatomic) NSArray *allCategories;
@property (retain, nonatomic) NSMutableArray *selectedDislikeReasons;
@property (retain, nonatomic) IssueCategory *selectedCategory;
@property (retain, nonatomic) NSMutableArray *selectedIssues;
@property (nonatomic) BOOL allowMultiSelectCategory;
@property (retain, nonatomic) NSMutableArray *selectedCategorys;
@property (retain, nonatomic) IssueCategoryV2 *selectedOptimusCategory;
@property (retain, nonatomic) IssueCategoryV2 *selectedOptimusIssue;
@property (nonatomic) unsigned long long scene;

- (void)fetchFeedbackCategoriesWithExtraParams:(id)a0 completeBlock:(id /* block */)a1;
- (void)uploadFeedback;
- (id)initWithAPI:(id)a0 scene:(unsigned long long)a1;
- (void)uploadFeedbackWithCompletion:(id /* block */)a0;
- (id)selectedIssueContent;
- (void).cxx_destruct;

@end
