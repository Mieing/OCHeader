@class NSString;

@interface IESLiveTask : NSObject

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) double time;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)initWithName:(id)a0 identifier:(id)a1 block:(id /* block */)a2 priority:(unsigned long long)a3;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
