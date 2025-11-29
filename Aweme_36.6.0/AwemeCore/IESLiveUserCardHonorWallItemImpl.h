@class NSString, IESLiveHonorWallElement, IESLiveUserCardStore, UIView;

@interface IESLiveUserCardHonorWallItemImpl : NSObject <IESLiveUserCardHonorWallItem>

@property (retain, nonatomic) IESLiveHonorWallElement *element;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (nonatomic) long long itemType;
@property (retain, nonatomic) UIView *itemView;
@property (retain, nonatomic) UIView *itemSubView;
@property (copy, nonatomic) id /* block */ onItemTapped;
@property (copy, nonatomic) id /* block */ onItemShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createItemSubView;
- (void)createItemTapped;
- (void)trackGlobalShow:(id)a0;
- (void)trackGlobalClick:(id)a0;
- (void)createItemShow;
- (id)initWithElement:(id)a0 withUsercardStore:(id)a1;
- (void)addExtraInfo;
- (void)createItemType;
- (void)trackClickWithDict:(id)a0;
- (void)trackShowWithDict:(id)a0;
- (void).cxx_destruct;
- (void)createItemView;

@end
