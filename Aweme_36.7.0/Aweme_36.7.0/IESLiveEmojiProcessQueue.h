@class NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveEmojiProcessQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *emojiProcessQueue;

+ (id)shareInstance;

- (void).cxx_destruct;

@end
