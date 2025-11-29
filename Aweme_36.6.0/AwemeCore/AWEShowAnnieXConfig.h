@class NSString, NSDictionary, NSHashTable, AWEShowDataInjGetDataInfo;

@interface AWEShowAnnieXConfig : NSObject

@property (retain, nonatomic) NSHashTable *containerLifeCycleDelegates;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *urlStringParams;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (retain, nonatomic) AWEShowDataInjGetDataInfo *dataInjGetDataInfo;
@property (copy, nonatomic) NSString *minResourceVersionString;

- (id)allContainerLifeCycleDelegate;
- (void)setupContainerLifeCycleDelegate:(id)a0;
- (void)removeContainerLifeCycleDelegate:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
