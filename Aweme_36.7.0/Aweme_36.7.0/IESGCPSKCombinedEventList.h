@class IESGCPSKCombinedEventNode;

@interface IESGCPSKCombinedEventList : NSObject

@property (readonly, nonatomic) IESGCPSKCombinedEventNode *head;

- (id)initWithEvent:(id)a0 plugins:(id)a1;
- (void)excuteAll;
- (void)excuteNode:(id)a0;
- (void)nodeToNextIfNeed:(id)a0 shouldDoNext:(BOOL)a1;
- (void)cleanAllNodeIfNeed;
- (void).cxx_destruct;

@end
