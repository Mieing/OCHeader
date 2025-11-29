@class NSString, AWEPOILynxContainerView, AWEPOITouchThroughView, NSDictionary;

@interface AWEPOIPreviewContainerManager : NSObject <AWEPOICubeViewDelegate>

@property (retain, nonatomic) AWEPOILynxContainerView *lynxView;
@property (retain, nonatomic) AWEPOITouchThroughView *containerView;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *lynxURL;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *lynxCommonData;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateWithContainerModel:(id)a0;
- (id)createLynxViewWithModel:(id)a0 extraParams:(id)a1 delegate:(id)a2;
- (void)updateLynxView:(id)a0 extraParams:(id)a1 withModel:(id)a2;
- (void)reloadLynxView:(id)a0 extraParams:(id)a1 withModel:(id)a2;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
