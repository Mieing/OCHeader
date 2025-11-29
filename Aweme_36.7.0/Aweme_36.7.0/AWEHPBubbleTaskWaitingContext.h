@class AWEHPChannelBubbleTask;

@interface AWEHPBubbleTaskWaitingContext : NSObject

@property (retain, nonatomic) AWEHPChannelBubbleTask *waitingTask;
@property (copy, nonatomic) id /* block */ canShowCallback;
@property (copy, nonatomic) id /* block */ timeOutCallback;

- (void).cxx_destruct;

@end
