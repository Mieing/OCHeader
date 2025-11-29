@class NSString, NSMutableArray, YataStructureNode;

@interface YataRootModel : NSObject

@property (nonatomic) unsigned long long triggerSource;
@property (copy, nonatomic) NSString *eventTrigger;
@property (retain, nonatomic) YataStructureNode *mainTreeRoot;
@property (retain, nonatomic) NSMutableArray *popupRootArray;

- (void).cxx_destruct;

@end
