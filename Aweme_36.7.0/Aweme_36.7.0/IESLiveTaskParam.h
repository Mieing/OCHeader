@class NSString;

@interface IESLiveTaskParam : NSObject

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long favor;
@property (nonatomic) long long priority;
@property (nonatomic) long long option;
@property (nonatomic) double timeout;

+ (id)paramWithName:(id)a0 scene:(unsigned long long)a1;

- (id)initWithName:(id)a0 scope:(unsigned long long)a1 scene:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
