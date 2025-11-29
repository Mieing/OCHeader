@class NSString;

@interface AWEUITaskSpreadObject : NSObject <AWEUITaskSpreadProtocol>

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) double runTime;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
