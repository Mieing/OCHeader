@class NSString, NSArray;

@interface IESLiveInteractComponentDefineExtra : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSArray *owners;
@property (nonatomic) unsigned long long loadRole;
@property (nonatomic) unsigned long long loadModule;
@property (copy, nonatomic) NSArray *loadTargets;
@property (nonatomic) long long loadLevel;

- (void).cxx_destruct;
- (id)init;

@end
