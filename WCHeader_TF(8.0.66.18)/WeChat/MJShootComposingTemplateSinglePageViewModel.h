@class NSString, WCGetCameraTemplateListParams, NSData, NSMutableArray, UBArraySignal;
@protocol MJShootComposingTemplateSinglePageViewModelTabDataSource, MJShootComposingTemplateSinglePageViewModelDelegate;

@interface MJShootComposingTemplateSinglePageViewModel : NSObject

@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) NSData *lastPageBuf;
@property (nonatomic) long long lastContinueFlag;
@property (nonatomic) unsigned long long templateScene;
@property (retain, nonatomic) NSString *selectedTemplateID;
@property (nonatomic) unsigned long long tabID;
@property (nonatomic) unsigned int tabType;
@property (retain, nonatomic) NSMutableArray *templateItems;
@property (weak, nonatomic) id<MJShootComposingTemplateSinglePageViewModelDelegate> delegate;
@property (weak, nonatomic) id<MJShootComposingTemplateSinglePageViewModelTabDataSource> tabDataSource;
@property (readonly, nonatomic) UBArraySignal *defaultTabDidUpdateTemplateSignal;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) WCGetCameraTemplateListParams *optionalParams;

- (id)init;
- (void)fetchTemplateItems;
- (void)fetchRecTemplateItems;
- (void)fetchFavTemplateItems;
- (void)loadMoreTemplateIfNeeded;
- (BOOL)shouldFetchMoreTemplate;
- (BOOL)containsTemplateWithID:(id)a0;
- (void).cxx_destruct;

@end
