@class WCTimeline3rdShareBaseReporter, NSMutableDictionary;

@interface WCTimeline3rdShareReportModel : NSObject

@property (retain, nonatomic) WCTimeline3rdShareBaseReporter *reporter;
@property (retain, nonatomic) NSMutableDictionary *supportClass;

+ (id)sharedInstance;
+ (void)bindDataItemIfSupport:(id)a0;
+ (void)updateOutcome:(unsigned int)a0 serverItem:(id)a1 localItem:(id)a2;

- (void)registerClasses;
- (Class)classForAppID:(id)a0;
- (void).cxx_destruct;

@end
