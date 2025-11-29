@class NSString, NSMutableDictionary;

@interface AmoebaReportData : NSObject {
    NSString *m_eventId;
    NSMutableDictionary *m_params;
}

- (id)init;
- (id)getEventId;
- (void)setEventId:(id)a0;
- (id)getParams;
- (void)setParams:(id)a0;
- (void)putParam:(id)a0 withValue:(id)a1;
- (void)putParams:(id)a0;
- (id)toString;
- (void).cxx_destruct;

@end
