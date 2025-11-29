@class NSArray, AWEDiscoverDPlayletSelectionPanelConfigModel, NSString, NSNumber;

@interface AWEDiscoverDPlayletVideoListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeModels;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEDiscoverDPlayletSelectionPanelConfigModel *selectionPanelConfig;
@property (retain, nonatomic) NSString *lynxPanelConfigJSON;
@property (retain, nonatomic) NSString *failReason;

+ (id)awemeModelsJSONTransformer;
+ (id)selectionPanelConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
