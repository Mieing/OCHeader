@class NSArray, NSString;
@protocol AWELGECInterestShrinkPanelLifeCycle;

@interface AWELGShoppingCollectionPanelContext : NSObject

@property (copy, nonatomic) NSArray *productModelArray;
@property (nonatomic) unsigned long long panelType;
@property (weak, nonatomic) id<AWELGECInterestShrinkPanelLifeCycle> panelLifeCycleDelegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *contentSourceType;
@property (copy, nonatomic) NSString *btmSourceToken;

- (void).cxx_destruct;

@end
