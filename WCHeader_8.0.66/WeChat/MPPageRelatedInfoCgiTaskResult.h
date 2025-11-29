@class NSArray;

@interface MPPageRelatedInfoCgiTaskResult : MMObject

@property (retain, nonatomic) NSArray *relatedInfoArr;
@property (nonatomic) unsigned int refreshIntervalSec;
@property (nonatomic) unsigned int maxRequestUrlCount;

- (id)description;
- (void).cxx_destruct;

@end
