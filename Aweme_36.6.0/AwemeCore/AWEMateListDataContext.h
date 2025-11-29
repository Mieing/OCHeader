@class NSString;

@interface AWEMateListDataContext : NSObject

@property (copy, nonatomic) NSString *pageIdentifier;
@property (nonatomic) long long cardGuideType;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterType;

- (void)configWithRouterParamsDictionary:(id)a0;
- (void).cxx_destruct;

@end
