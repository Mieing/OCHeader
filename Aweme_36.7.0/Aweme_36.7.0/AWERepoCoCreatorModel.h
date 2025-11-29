@class NSString, NSArray;

@interface AWERepoCoCreatorModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryReeditContextProtocol, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *coCreators;
@property (nonatomic) BOOL isStarAtlasCoCreator;
@property (nonatomic) BOOL hasStarAtlasMission;
@property (copy, nonatomic) NSString *capcutToken;
@property (nonatomic) BOOL hasLoadCapCutInfo;

- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)updateFromAweme:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
