@class IESLiveRightTopMutuallyExclusiveItem, UIView;
@protocol HTSLivePluginLayoutView;

@interface IESLiveContainerKitOperateHandler : NSObject

@property (weak, nonatomic) UIView<HTSLivePluginLayoutView> *pluginView;
@property (retain, nonatomic) IESLiveRightTopMutuallyExclusiveItem *currentItem;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ onStateChange;

- (void).cxx_destruct;

@end
