@class NSString, NSDictionary, AWESearchFrequencyManager, AWESearchHarmfulCategoryManager, CSPChunkRequestManager, UIViewController;

@interface AWEEcomSearchBaseDataManager : NSObject <CSPChunkRequestDelegate>

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *keyWord;
@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL shouldHideCorrection;
@property (copy, nonatomic) NSString *previousSearchID;
@property (copy, nonatomic) NSDictionary *searchRequestLogQueries;
@property (weak, nonatomic) UIViewController *refViewController;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *ecomScene;
@property (retain, nonatomic) AWESearchFrequencyManager *frequencyManager;
@property (retain, nonatomic) AWESearchHarmfulCategoryManager *harmfulCategoryManager;
@property (retain, nonatomic) CSPChunkRequestManager *chunkRequestManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
