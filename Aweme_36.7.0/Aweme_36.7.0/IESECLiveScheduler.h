@class NSString;

@interface IESECLiveScheduler : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) id /* block */ action;

- (BOOL)invokeWithParams:(id)a0;
- (id)initWithName:(id)a0 category:(id)a1 action:(id /* block */)a2;
- (void).cxx_destruct;

@end
