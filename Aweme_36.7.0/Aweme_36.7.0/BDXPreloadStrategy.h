@interface BDXPreloadStrategy : NSObject

@property (nonatomic) long long priority;
@property (nonatomic) long long strategyType;
@property (nonatomic) BOOL enableTemplateMemCache;
@property (nonatomic) BOOL disablePreloadTemplate;
@property (nonatomic) BOOL onlyPreloadTemplate;

+ (id)strategy:(long long)a0;
+ (id)strategy:(long long)a0 priority:(long long)a1;

- (id)init;

@end
