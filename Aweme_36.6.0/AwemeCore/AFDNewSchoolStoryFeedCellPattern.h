@class NSString;

@interface AFDNewSchoolStoryFeedCellPattern : NSObject

@property (copy, nonatomic) NSString *controllerClassName;
@property (copy, nonatomic) NSString *cellType;
@property (nonatomic) BOOL isStatic;
@property (copy, nonatomic) id /* block */ itemPredicateBlock;
@property (copy, nonatomic) id /* block */ cellTypeBlock;

- (void).cxx_destruct;

@end
