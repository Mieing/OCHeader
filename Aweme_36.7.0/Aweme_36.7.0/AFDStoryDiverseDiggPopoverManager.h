@class AFDFrequencyCountRule;

@interface AFDStoryDiverseDiggPopoverManager : NSObject

@property (nonatomic) BOOL popoverHasShown;
@property (retain, nonatomic) AFDFrequencyCountRule *countRule;

+ (id)sharedInstance;

- (BOOL)canShowDiverseDiggPopover:(id)a0 enterFrom:(id)a1;
- (void)showBubbleForFirstCellIfNeeded:(id)a0 showCompletion:(id /* block */)a1 dismissCompletion:(id /* block */)a2;
- (void)resetPopoverShowState;
- (void).cxx_destruct;
- (id)init;

@end
