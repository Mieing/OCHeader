@class AWEBatManModel;

@interface AWEBatManOnQueueNotifyContext : NSObject

@property (copy, nonatomic) id /* block */ playBlock;
@property (copy, nonatomic) id /* block */ ignoreNotifyBlock;
@property (retain, nonatomic) AWEBatManModel *batManModel;

- (void).cxx_destruct;

@end
