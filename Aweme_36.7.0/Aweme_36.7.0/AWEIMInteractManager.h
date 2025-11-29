@class AWEIMStrangerMessage;

@interface AWEIMInteractManager : NSObject

@property (retain, nonatomic) AWEIMStrangerMessage *latestStrangerMsg;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
