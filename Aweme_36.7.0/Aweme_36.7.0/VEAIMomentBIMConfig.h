@class NSArray;

@interface VEAIMomentBIMConfig : NSObject

@property (nonatomic) unsigned long long algorithmType;
@property (retain, nonatomic) NSArray *aspectInfos;
@property (nonatomic) long long runtimeSelectModels;

- (void).cxx_destruct;
- (id)init;

@end
