@class IESECMarketingView, NSString, UIView, IESECMarketingPerfModel, NSMutableDictionary, IESECMarketingHybridModel, NSDictionary, UIViewController;

@interface IESECMarketingCenterPageMeta : NSObject <IESECMarketingCenterRitMetaDelegate>

@property (copy, nonatomic) NSDictionary *pageData;
@property (copy, nonatomic) NSString *bizId;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (weak, nonatomic) IESECMarketingView *ecMarketingView;
@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *commonLogParams;
@property (copy, nonatomic) id /* block */ customOpenBlock;
@property (copy, nonatomic) NSDictionary *taskConfig;
@property (readonly, copy, nonatomic) NSDictionary *modifyData;
@property (retain, nonatomic) IESECMarketingHybridModel *hybridModel;
@property (weak, nonatomic) UIView *container;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) IESECMarketingPerfModel *perfModel;
@property (retain, nonatomic) NSMutableDictionary *ritMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)refreshWithData:(id)a0;
- (id)monitorParams;
- (void)updateWithData:(id)a0 rit:(id)a1 completion:(id /* block */)a2;
- (id)getRitMetaWithKey:(id)a0 createIfNeeded:(BOOL)a1;
- (void)updateWithData:(id)a0 completion:(id /* block */)a1;
- (id)initWithPageViewController:(id)a0;
- (void)openAllRoot;
- (void)openTargetRit:(id)a0 component:(id)a1;
- (void)updateWithData:(id)a0 rit:(id)a1 component:(id)a2 completion:(id /* block */)a3;
- (void)closeAll;
- (void).cxx_destruct;

@end
