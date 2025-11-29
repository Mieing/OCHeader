@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXMulticastDelegateNode : NSObject

@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int priority;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL sync;

- (void).cxx_destruct;

@end
