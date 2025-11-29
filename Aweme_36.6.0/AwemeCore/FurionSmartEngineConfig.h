@class NSString;

@interface FurionSmartEngineConfig : NSObject

@property (nonatomic) long long taskType;
@property (nonatomic) unsigned long long engineType;
@property (nonatomic) unsigned long long enginePrepareType;
@property (copy, nonatomic) NSString *resource;
@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) BOOL disable;

- (void).cxx_destruct;

@end
