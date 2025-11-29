@class NSString;
@protocol ACCPublishRepository;

@interface ACCRepositoryGlobalModel : NSObject <NSCopying, ACCRepositoryContextDeprecated>

@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
