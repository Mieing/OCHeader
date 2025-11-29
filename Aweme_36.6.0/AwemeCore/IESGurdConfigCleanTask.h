@class NSArray;

@interface IESGurdConfigCleanTask : NSObject

@property (copy, nonatomic) NSArray *cleanPackages;
@property (copy, nonatomic) NSArray *closePackages;
@property (copy, nonatomic) NSArray *forbiddenPackages;
@property (copy, nonatomic) NSArray *unforbiddenPackages;

+ (id)cleanTaskWithDictionary:(id)a0;

- (BOOL)shouldCleanPrepareMetaWithVersion:(long long)a0;
- (BOOL)shouldForbidVisitActiveMetaWithVersion:(long long)a0;
- (BOOL)shouldAllowVisitActiveMetaWithVersion:(long long)a0;
- (BOOL)shouldCleanActiveMetaWithVersion:(long long)a0;
- (void).cxx_destruct;

@end
