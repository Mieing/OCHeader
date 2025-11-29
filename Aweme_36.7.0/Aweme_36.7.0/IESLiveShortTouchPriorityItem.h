@class IESLiveShortTouchItem;

@interface IESLiveShortTouchPriorityItem : NSObject

@property (retain, nonatomic) IESLiveShortTouchItem *item;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
