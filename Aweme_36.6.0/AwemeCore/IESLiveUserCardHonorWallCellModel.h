@class IESLiveUserCardStore, UIView;
@protocol IESLiveUserCardHonorWallViewProtocol;

@interface IESLiveUserCardHonorWallCellModel : NSObject

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) UIView<IESLiveUserCardHonorWallViewProtocol> *contentView;
@property (nonatomic) double viewHeight;
@property (nonatomic) BOOL hasShowAnimation;

- (id)initWithItemType:(unsigned long long)a0 store:(id)a1;
- (void)startShowAnimationIfNeed;
- (void).cxx_destruct;

@end
