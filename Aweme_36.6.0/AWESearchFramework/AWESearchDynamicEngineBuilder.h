@class NSString, AWEDynamicPatchModel;

@interface AWESearchDynamicEngineBuilder : NSObject

@property (retain, nonatomic) AWEDynamicPatchModel *model;
@property (nonatomic) double preferWidth;
@property (nonatomic) BOOL useBullet;
@property (nonatomic) BOOL shouldReuseLynxView;
@property (copy, nonatomic) NSString *searchScene;
@property (nonatomic) long long defaultReuseMethod;
@property (nonatomic) long long reuseMethod;
@property (nonatomic) BOOL byReload;

- (void).cxx_destruct;
- (id)init;

@end
