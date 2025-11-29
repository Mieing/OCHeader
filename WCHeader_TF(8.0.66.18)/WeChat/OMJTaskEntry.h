@class NSString;

@interface OMJTaskEntry : NSObject

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long traits;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) BOOL hasSubTask;

- (id)initWithIdentifier:(unsigned long long)a0 name:(id)a1 duration:(double)a2 traits:(unsigned long long)a3 isComplete:(BOOL)a4 hasSubTask:(BOOL)a5;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
