@class NSString;

@interface _HTSBootBlockNode : NSObject <HTSBootNode>

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL isMainThread;
@property (copy, nonatomic) NSString *uniqueId;
@property (readonly) unsigned int qos;
@property (readonly) double delayDuration;
@property (readonly) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBlock:(id /* block */)a0 mainThread:(BOOL)a1;
- (void).cxx_destruct;
- (void)run;

@end
