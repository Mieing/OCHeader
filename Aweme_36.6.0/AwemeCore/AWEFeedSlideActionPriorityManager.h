@class NSMutableDictionary;

@interface AWEFeedSlideActionPriorityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *priorityDict;

- (BOOL)shouldShowWithController:(id)a0;
- (void).cxx_destruct;
- (void)registerController:(id)a0;

@end
