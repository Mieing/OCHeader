@class NSString, NSMutableDictionary;
@protocol AWEPostPageContext;

@interface AWEPostPageCompanyToolsHandler : NSObject <AWEPostPageCompanyToolsService>

@property (nonatomic) long long requestState;
@property (retain, nonatomic) NSMutableDictionary *shownBubbleToolMenuKeys;
@property (readonly, nonatomic) BOOL shouldShowCompanyTools;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)a0;
- (id)trackCompanyToolsParams;
- (void)recordShownBubbleTool:(id)a0;
- (void)requestCompanyTools;
- (void)saveCompanyToolShownInfo;
- (void).cxx_destruct;

@end
