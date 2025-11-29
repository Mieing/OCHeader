@class NSString, NSMutableDictionary;

@interface SalamanderAnnieX.IReportMonitorLogMethodRequest : NSObject {
    void /* unknown type, empty encoding */ __rts_logType;
    void /* function */ service;
    void /* unknown type, empty encoding */ status;
}

@property (nonatomic, copy) NSString *logType;
@property (nonatomic, copy) NSString *service;
@property (nonatomic, retain) NSMutableDictionary *value;

- (void).cxx_destruct;
- (id)init;

@end
