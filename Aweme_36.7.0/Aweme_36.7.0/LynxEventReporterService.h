@class NSString, NSMutableArray;
@protocol LynxPerformanceReportProcessorProtocol;

@interface LynxEventReporterService : NSObject <LynxServiceEventReporterProtocol> {
    NSMutableArray *_processorArray;
    id<LynxPerformanceReportProcessorProtocol> _defaultProcessor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
