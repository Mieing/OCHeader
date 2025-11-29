@class NSArray, NSDictionary, NSMutableDictionary, AWEProfileHeaderContext, NSString;

@interface AWEProfileHeaderSectionProviderManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSDictionary *providerClassDict;
@property (retain, nonatomic) NSArray *providerArray;
@property (retain, nonatomic) NSMutableDictionary *sectionViewModelDict;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (readonly, nonatomic) NSArray *sectionControllerClassArray;
@property (readonly, nonatomic) NSArray *sectionViewModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEDYProfileHeaderActionControllerCommonAdapterClass;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)configWithContext:(id)a0;
- (BOOL)supportLuckyCat;
- (void)registerSectionProvider;
- (void)configSectionProviderArray;
- (void)resetSectionViewModelArray;
- (id)buildSectionOrderArray;
- (id)p_buildSectionOrderArrayTestV6;
- (id)aAWEDYProfileHeaderActionControllerCommonAdapter;
- (long long)previousSectionType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
