@class NSDictionary, UIViewController;

@interface IESLiveCertExtraParams : NSObject

@property (retain, nonatomic) UIViewController *fromViewController;
@property (nonatomic) BOOL forcePresent;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL needReportResult;

- (void).cxx_destruct;

@end
