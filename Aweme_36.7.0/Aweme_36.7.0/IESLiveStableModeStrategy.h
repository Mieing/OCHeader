@class NSString;

@interface IESLiveStableModeStrategy : NSObject

@property (copy, nonatomic) NSString *identity;
@property (nonatomic) long long supportType;
@property (nonatomic) long long strategyLevel;
@property (copy, nonatomic) id /* block */ strategyHandler;
@property (copy, nonatomic) id /* block */ resumeHandler;

- (void).cxx_destruct;

@end
