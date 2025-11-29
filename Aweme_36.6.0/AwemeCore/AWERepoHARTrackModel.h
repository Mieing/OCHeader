@class NSString;
@protocol ACCPublishRepository;

@interface AWERepoHARTrackModel : NSObject <ACCRepositoryContextDeprecated, ACCRepositoryTrackContextDeprecated>

@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_referExtraParams;
- (id)acc_HARTrackParemerters;
- (id)p_transOriginHARResult:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
