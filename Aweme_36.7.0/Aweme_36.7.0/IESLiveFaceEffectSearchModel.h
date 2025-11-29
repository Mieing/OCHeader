@class NSString, NSArray;

@interface IESLiveFaceEffectSearchModel : NSObject

@property (copy, nonatomic) NSString *searchWord;
@property (nonatomic) BOOL isUseHot;
@property (nonatomic) BOOL shouldShowTagView;
@property (nonatomic) BOOL shouldShowHot;
@property (retain, nonatomic) NSArray *hashList;
@property (nonatomic) BOOL isSearchPopMode;
@property (nonatomic) BOOL hasTouchSearchBtn;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) BOOL shouldReload;
@property (nonatomic) BOOL isTagSearch;
@property (retain, nonatomic) NSString *liveRecommendTips;
@property (retain, nonatomic) NSString *liveSearchTips;

- (void).cxx_destruct;

@end
