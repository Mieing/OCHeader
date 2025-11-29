@class NSDictionary, NSString;

@interface AWEInteractionDiggConfig : NSObject

@property (copy, nonatomic) id /* block */ diggBlock;
@property (copy, nonatomic) id /* block */ undiggBlock;
@property (copy, nonatomic) id /* block */ otherActionBlock;
@property (copy, nonatomic) id /* block */ actionFailedBlock;
@property (copy, nonatomic) id /* block */ succeedBlock;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL diggOriginItem;
@property (nonatomic) BOOL inFollowFeed;
@property (nonatomic) BOOL ignoreUnLogin;

- (void).cxx_destruct;

@end
