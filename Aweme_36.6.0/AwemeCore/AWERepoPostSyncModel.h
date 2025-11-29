@class NSString, AWEUlikeAccountAuthModel;

@interface AWERepoPostSyncModel : NSObject <ACCRepoModelDraftProtocol, NSCopying>

@property (nonatomic) BOOL isSyncToUlike;
@property (retain, nonatomic) AWEUlikeAccountAuthModel *ulikeAuthInfo;
@property (readonly, nonatomic) BOOL isUlikeBinded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (void)updateUlikeSync:(BOOL)a0 manually:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
