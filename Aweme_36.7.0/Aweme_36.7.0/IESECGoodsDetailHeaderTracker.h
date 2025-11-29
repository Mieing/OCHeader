@class IESECGoodsDetailHeaderServiceProvider, NSString, IESECGoodsDetailPageContext, IESECGoodsDetailHeaderModel;
@protocol IESECGoodsDetailHeaderContainerService;

@interface IESECGoodsDetailHeaderTracker : NSObject <IESECGoodsDetailHeaderTrackerService>

@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *serviceProvider;
@property (weak, nonatomic) IESECGoodsDetailPageContext *pageContext;
@property (weak, nonatomic) IESECGoodsDetailHeaderModel *headModel;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderContainerService> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateHeaderModel:(id)a0;
- (void)trackWithEventName:(id)a0 andParams:(id)a1 btmID:(id)a2;
- (void)trackWithADEventName:(id)a0 adLabel:(id)a1 adRefer:(id)a2 andParams:(id)a3;
- (void)trackWithEventName:(id)a0 andParams:(id)a1 btmID:(id)a2 once:(id)a3;
- (void)standardTrackerReport:(long long)a0 once:(id)a1 params:(id)a2 btmID:(id)a3;
- (id)initWithServiceProvider:(id)a0 context:(id)a1 data:(id)a2;
- (void).cxx_destruct;

@end
