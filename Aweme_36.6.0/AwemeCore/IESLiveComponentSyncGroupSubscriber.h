@class NSString;

@interface IESLiveComponentSyncGroupSubscriber : NSObject

@property (retain, nonatomic) NSString *taskID;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
