@class NSDictionary, NSString, AWECodeGenCoverTopLeftCornerModel;

@interface AWEUserWorkCellReachComponent_NEWAPI : AWEUserWorkCellDiagnoseComponent_NEWAPI <AWEUserWorkCellReachComponentProtocol, AWEUserWorkCellComponentTrackProtocol>

@property (retain, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) id /* block */ hiddenBlock;
@property (weak, nonatomic) AWECodeGenCoverTopLeftCornerModel *cornerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;
+ (id)coverTopLeftCornerModelWithData:(id)a0;

- (id)trackParams;
- (id)coverDetectResult;
- (BOOL)dynamicComponent;
- (id)bussinessTrackParams;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;
- (void)dealloc;

@end
