@class NSString;

@interface AWENetBlockTask : NSObject <AWENetTaskProtocol>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) long long type;
@property (readonly, nonatomic) BOOL depandOnEnqueueThread;
@property (nonatomic) BOOL runInMainThread;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithAction:(id /* block */)a0 type:(long long)a1 name:(id)a2;

- (id)initWithAction:(id /* block */)a0 type:(long long)a1 name:(id)a2;
- (void).cxx_destruct;
- (void)run;

@end
