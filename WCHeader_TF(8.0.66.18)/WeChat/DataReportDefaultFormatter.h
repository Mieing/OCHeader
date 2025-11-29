@class NSString;

@interface DataReportDefaultFormatter : NSObject <DataReportParamsFormatProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)formatEventDatas:(id)a0 pageData:(id)a1 customParams:(id)a2 eventId:(id)a3;
- (id)formatConvergeData:(id)a0 generalParams:(id)a1 customParams:(id)a2;

@end
