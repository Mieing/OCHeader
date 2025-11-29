@interface ACCSideslipPanelMaterialsComprehensionRequestState : NSObject

@property (nonatomic) BOOL hasStartFetch;
@property (nonatomic) BOOL isWaitingResponse;
@property (nonatomic) BOOL hasEncounterError;
@property (nonatomic) BOOL hasUpdateLists;
@property (nonatomic) long long firstFetchPlaceholderCount;
@property (nonatomic) BOOL hasUseDataFromCache;

@end
