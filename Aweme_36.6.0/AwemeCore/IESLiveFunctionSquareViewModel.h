@class NSArray, NSString, IESLiveFunctionSquareViewSceneConfig, IESLiveFunctionSquareSectionNode, NSMutableArray, IESLiveFunctionSquareSearchConfig;

@interface IESLiveFunctionSquareViewModel : NSObject

@property (retain, nonatomic) IESLiveFunctionSquareSectionNode *tabItemsSection;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (copy, nonatomic) NSArray *tabDataSource;
@property (readonly, nonatomic) NSArray *tabContentDataSource;
@property (readonly, copy, nonatomic) NSArray *interactToolTabContentDataSource;
@property (copy, nonatomic) NSString *beforeLiveDesc;
@property (copy, nonatomic) NSString *afterLiveDescLinkURL;
@property (readonly, nonatomic) IESLiveFunctionSquareViewSceneConfig *sceneConfig;
@property (readonly, nonatomic) IESLiveFunctionSquareSearchConfig *searchConfig;

- (id)initWithSceneConfig:(id)a0;
- (void).cxx_destruct;

@end
