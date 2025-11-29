@class NSString;
@protocol IESLiveLinkReporterProtocol;

@interface IESLiveLinkBizCommonContext : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *anchorId;
@property (weak, nonatomic) id<IESLiveLinkReporterProtocol> liveLinkReporter;

- (void).cxx_destruct;

@end
