@class IESOuterTestFirstInstallCheckResponse, NSDictionary;

@interface IESOuterTestFirstInstallGuideViewModel : NSObject

@property (retain, nonatomic) IESOuterTestFirstInstallCheckResponse *firstInstallModel;
@property (copy, nonatomic) NSDictionary *traceParams;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ cancelAction;

- (void)clickCloseButton;
- (void)clickConfirmButton;
- (void)didActive;
- (id)initWithModel:(id)a0 traceParams:(id)a1;
- (void).cxx_destruct;

@end
