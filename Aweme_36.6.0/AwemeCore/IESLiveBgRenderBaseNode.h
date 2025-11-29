@class NSString;
@protocol IESLiveBgRenderEngineDataSource;

@interface IESLiveBgRenderBaseNode : NSObject <IESLiveBgRenderEngineDataNotice>

@property (weak, nonatomic) id<IESLiveBgRenderEngineDataSource> dataSource;
@property (nonatomic) BOOL needUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSonNodes;
- (void)onNodeMount;
- (void)onNodeUnMount;
- (id)outPutImage;
- (void).cxx_destruct;
- (id)nodeName;

@end
