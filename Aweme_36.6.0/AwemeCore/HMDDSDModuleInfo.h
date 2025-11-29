@interface HMDDSDModuleInfo : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) unsigned long long needSize;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) long long callBackDirectlyCount;

- (void).cxx_destruct;

@end
