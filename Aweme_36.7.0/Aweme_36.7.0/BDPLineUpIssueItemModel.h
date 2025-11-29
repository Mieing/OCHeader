@class NSString, NSArray;

@interface BDPLineUpIssueItemModel : NSObject

@property (copy, nonatomic) NSString *issueID;
@property (copy, nonatomic) NSString *strategyID;
@property (nonatomic) unsigned long long pageStrategy;
@property (nonatomic) unsigned long long sceneStrategy;
@property (nonatomic) unsigned long long reduplicationStrategy;
@property (retain, nonatomic) NSArray *pageList;
@property (retain, nonatomic) NSArray *sceneList;
@property (retain, nonatomic) NSArray *rangeList;
@property (nonatomic) unsigned long long up;
@property (nonatomic) unsigned long long down;
@property (copy, nonatomic) NSString *tips;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
