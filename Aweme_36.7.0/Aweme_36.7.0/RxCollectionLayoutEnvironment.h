@class __RxDataSourceSnapshotter, NSString, UITraitCollection;
@protocol RxCollectionLayoutContainer;

@interface RxCollectionLayoutEnvironment : NSObject <RxCollectionLayoutEnvironment>

@property (retain, nonatomic) id<RxCollectionLayoutContainer> container;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) __RxDataSourceSnapshotter *_dataSourceSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 traitCollection:(id)a1 dataSourceSnapshot:(id)a2;

@end
