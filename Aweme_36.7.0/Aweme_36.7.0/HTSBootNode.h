@class NSString;

@interface HTSBootNode : NSObject <HTSBootNode>

@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) Class taskClass;
@property (nonatomic) BOOL canRun;
@property (nonatomic) BOOL isMainThread;
@property (copy, nonatomic) NSString *className;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double delayDuration;
@property (nonatomic) unsigned int qos;
@property (copy, nonatomic) id /* block */ lazyTaskblock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
