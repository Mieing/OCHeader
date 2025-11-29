@class NSString;
@protocol AWECommerceLiveComponentsManager;

@interface AWELiveLocalLifeCommerceComponentsManager : NSObject <IESLiveLocalLifeCommerceComponentsManager>

@property (copy, nonatomic) id /* block */ cardDisappearCompletionBlock;
@property (copy, nonatomic) id /* block */ closeBtnTapToDisappearCardCompletionBlock;
@property (copy, nonatomic) id /* block */ getLiveRoomInfoBlock;
@property (retain, nonatomic) id<AWECommerceLiveComponentsManager> manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cardDisappearFromRightToLeft;
- (void)configAdInfoForCardView:(id)a0;
- (void).cxx_destruct;

@end
