@class NSObject;
@protocol OS_dispatch_queue;

@interface IESIMLogService : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;
@property (nonatomic) BOOL useQueue;
@property (nonatomic) BOOL useMultipleInstance;

+ (id)sharedInstance;

- (void)iesim_logMessage:(id)a0 withLevel:(unsigned long long)a1 tag:(id)a2 fileName:(id)a3 funcName:(id)a4 line:(int)a5;
- (void)p_iesim_logMessage:(id)a0 withLevel:(unsigned long long)a1 tag:(id)a2 fileName:(id)a3 funcName:(id)a4 line:(int)a5 time:(struct timeval { long long x0; int x1; })a6;
- (void).cxx_destruct;
- (id)init;

@end
