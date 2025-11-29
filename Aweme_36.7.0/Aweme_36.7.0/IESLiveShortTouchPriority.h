@class IESLiveShortTouchPriorityConfig, NSMutableArray;

@interface IESLiveShortTouchPriority : NSObject

@property (retain, nonatomic) NSMutableArray *priorityItems;
@property (retain, nonatomic) IESLiveShortTouchPriorityConfig *priorityConfig;
@property (copy, nonatomic) id /* block */ callBack;

- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)filterWithItem:(id)a0 completion:(id /* block */)a1;
- (void)callAllActionsWithItem:(id)a0;
- (void).cxx_destruct;

@end
