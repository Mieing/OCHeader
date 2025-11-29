@class NSDictionary;

@interface TTAccountBadgerInput : NSObject

@property (nonatomic) long long badgerSceneId;
@property (nonatomic) long long timeout;
@property (nonatomic) long long frequencyInterval;
@property (nonatomic) long long collectMode;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;

@end
