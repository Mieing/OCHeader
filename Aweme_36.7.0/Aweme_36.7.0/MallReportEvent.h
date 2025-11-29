@class IESECXBridgeEcMallReportMethodParamModel;

@interface MallReportEvent : NSObject

@property (copy, nonatomic) IESECXBridgeEcMallReportMethodParamModel *paramModel;
@property (nonatomic) BOOL enterNewPage;

- (id)initWithParamModel:(id)a0 enterNewPage:(BOOL)a1;
- (void).cxx_destruct;

@end
