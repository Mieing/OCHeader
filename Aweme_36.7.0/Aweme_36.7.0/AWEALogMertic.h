@class NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEALogMertic : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *messages;
@property (retain, nonatomic) NSMutableSet *aloneSet;
@property (nonatomic) double repeatTemporary;
@property (nonatomic) double temporary;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) double scale;
@property (nonatomic) double repeatInterval;
@property (nonatomic) unsigned long long longTextLimit;

- (void)_handleLogMessage:(id)a0;
- (void)handleLogMessage:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (id)init;
- (void)_reset;
- (void)reset;
- (void)_report;

@end
