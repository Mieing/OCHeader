@class NSString;

@interface AWEMVScatterTask : NSObject <AWEMVScatterTaskProtocol>

@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) id /* block */ invokeBlock;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (nonatomic) double runTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
