@class IESLiveRightTopMutuallyExclusiveItem;

@interface IESLiveRightTopManager : NSObject

@property (retain, nonatomic) IESLiveRightTopMutuallyExclusiveItem *currentItem;
@property (nonatomic) BOOL inCleanMode;

- (void)showRightTopViewWithItem:(id)a0 processResult:(id /* block */)a1;
- (void)closeRightTopViewWithItem:(id)a0 processResult:(id /* block */)a1;
- (void)cleanContainer:(long long)a0;
- (BOOL)couldShowItem:(id)a0;
- (void)showRightTopView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
