@class NSArray, NSNumber, AWEShowPlayletSelectionPanelConfigModel;

@interface AWEShowPlayletVideoListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeModels;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEShowPlayletSelectionPanelConfigModel *selectionPanelConfig;

+ (id)awemeModelsJSONTransformer;
+ (id)selectionPanelConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
