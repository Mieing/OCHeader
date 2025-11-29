@class NSDictionary, NSString;
@protocol ACCPublishRepository;

@interface AWERepoRouterModel : NSObject <ACCRepositoryContextDeprecated, NSCopying>

@property (readonly, nonatomic) NSDictionary *parameters;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
