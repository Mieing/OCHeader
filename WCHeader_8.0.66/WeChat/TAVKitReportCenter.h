@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TAVKitReportCenter : NSObject

@property (nonatomic) long long uploadingCount;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *directory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)instance;

- (id)init;
- (id)fetchDeviceType;
- (id)makeCommonReportFields;
- (id)makeHttpBodyForReportFile:(id)a0 commonFields:(id)a1;
- (void)reportFile:(id)a0 commonFields:(id)a1 isLast:(BOOL)a2 callback:(id /* block */)a3;
- (void)report:(id /* block */)a0;
- (void).cxx_destruct;

@end
