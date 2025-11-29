@class NSString, NSArray;

@interface BDPBlockEnterIssueItemModel : NSObject

@property (copy, nonatomic) NSString *issueID;
@property (nonatomic) unsigned long long sceneStrategy;
@property (retain, nonatomic) NSArray *sceneList;
@property (nonatomic) unsigned long long randomRatio;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailDesc;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
