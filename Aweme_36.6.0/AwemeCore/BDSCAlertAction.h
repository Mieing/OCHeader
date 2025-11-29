@class NSString;

@interface BDSCAlertAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) unsigned long long actionUse;

+ (id)actionWithStyle:(unsigned long long)a0 title:(id)a1 block:(id /* block */)a2;

- (void).cxx_destruct;

@end
