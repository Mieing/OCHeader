@class NSString, NSArray, IssueCategory, NSMutableArray, IssueCategoryV2;
@protocol IESLiveInteractFeedbackListModel, IESLiveInteractFeedbackAPI;

@interface IESLiveInteractFeedbackViewModel : NSObject

@property (retain, nonatomic) id<IESLiveInteractFeedbackAPI> feedbackAPI;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ baseParamsBlock;
@property (copy, nonatomic) id /* block */ extraParamsBlock;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *trackSource;
@property (copy, nonatomic) NSString *categoryTitle;
@property (copy, nonatomic) id /* block */ clickCategoryBlock;
@property (retain, nonatomic) id<IESLiveInteractFeedbackListModel> listModel;
@property (nonatomic) BOOL contentEditing;
@property (copy, nonatomic) NSArray *allCategories;
@property (retain, nonatomic) NSMutableArray *selectedDislikeReasons;
@property (retain, nonatomic) IssueCategory *selectedCategory;
@property (retain, nonatomic) NSMutableArray *selectedIssues;
@property (nonatomic) BOOL allowMultiSelectCategory;
@property (nonatomic) BOOL allowSubMultiSelectCategory;
@property (retain, nonatomic) NSMutableArray *selectedCategorys;
@property (retain, nonatomic) IssueCategoryV2 *selectedOptimusCategory;
@property (retain, nonatomic) IssueCategoryV2 *selectedOptimusIssue;
@property (nonatomic) BOOL isUploadSuccess;
@property (nonatomic) long long scaleRatio;

- (void)fetchFeedbackCategoriesWithExtraParams:(id)a0 completeBlock:(id /* block */)a1;
- (void)uploadFeedback;
- (id)initWithAPI:(id)a0 scene:(unsigned long long)a1;
- (void)uploadFeedbackWithCompletion:(id /* block */)a0;
- (id)selectedIssueContent;
- (void)fetchPlaymodeFeedbackCategoriesWithExtraParams:(id)a0 playMode:(int)a1 completeBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
