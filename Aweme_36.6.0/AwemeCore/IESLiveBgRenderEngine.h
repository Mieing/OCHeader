@class IESLiveBgRenderBackGroundNode, NSMutableDictionary, NSString;

@interface IESLiveBgRenderEngine : NSObject <IESLiveBgRenderEngineDataSource, IESLiveBgRenderEngineDataNotice>

@property (retain, nonatomic) NSMutableDictionary *nodesDic;
@property (retain, nonatomic) IESLiveBgRenderBackGroundNode *root;
@property (nonatomic) BOOL isPausingForRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBgImage:(id)a0;
- (void)updateMaskWithTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 slots:(id)a1;
- (void)updateRadius:(double)a0;
- (void)setUpEngine;
- (id)getOutputImage;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
