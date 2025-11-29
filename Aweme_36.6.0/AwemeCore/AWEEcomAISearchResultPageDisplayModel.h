@class AWEEcomAISearchResultHeaderModel, NSArray, AWEEcomAISearchResultInputBoxModel, AWEEcomAISearchResultBackgroundModel, AWEEcomAISearchResultResponse, AWEEcomAISearchResultNoResultModel;

@interface AWEEcomAISearchResultPageDisplayModel : NSObject

@property (nonatomic) long long pageState;
@property (weak, nonatomic) AWEEcomAISearchResultResponse *currentResponse;
@property (copy, nonatomic) NSArray *displayResults;
@property (retain, nonatomic) AWEEcomAISearchResultBackgroundModel *defaultBackgroundModel;
@property (retain, nonatomic) AWEEcomAISearchResultHeaderModel *headerModel;
@property (nonatomic) BOOL onlyContainsCOT;
@property (readonly, nonatomic) AWEEcomAISearchResultBackgroundModel *backgroundModel;
@property (readonly, nonatomic) AWEEcomAISearchResultNoResultModel *noResultModel;
@property (readonly, nonatomic) AWEEcomAISearchResultInputBoxModel *inputBox;
@property (readonly, nonatomic) BOOL hasMore;

+ (id)createDefaultBackgroundModel;

- (void).cxx_destruct;
- (id)init;

@end
