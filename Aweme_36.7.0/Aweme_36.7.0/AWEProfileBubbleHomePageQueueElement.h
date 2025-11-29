@class AWEPriorityQueue, NSString, UIView;
@protocol AWEProfileBubbleProtocol;

@interface AWEProfileBubbleHomePageQueueElement : NSObject <AWEPriorityQueueElementProtocol>

@property (retain, nonatomic) UIView<AWEProfileBubbleProtocol> *view;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long queueType;
@property (nonatomic) long long priority;
@property (weak, nonatomic) AWEPriorityQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
