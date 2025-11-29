@class NSString;

@interface AWETokamakLogUploader : NSObject <AWETokamakLogUploaderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)uploadAlogIfCrashed;
+ (void)uploadFeedbackAlogFromDate:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (void)uploadAlogFromDate:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (BOOL)alogInstanceEnabled;
+ (void)uploadKiteLogFromDaysBefore:(unsigned long long)a0 scene:(id)a1 byUser:(BOOL)a2 callback:(id /* block */)a3;
+ (void)uploadKiteLogByLogPaths:(id)a0 scene:(id)a1 byUser:(BOOL)a2 callback:(id /* block */)a3;
+ (void)uploadKiteLogFromDaysBefore:(unsigned long long)a0 scene:(id)a1 callback:(id /* block */)a2;
+ (void)uploadKiteLogByLogPaths:(id)a0 scene:(id)a1 callback:(id /* block */)a2;
+ (id)logFilePathOfLastSession;
+ (void)uploadFileByPath:(id)a0 type:(id)a1 uploadFlag:(id)a2 scene:(id)a3 byUser:(BOOL)a4 callback:(id /* block */)a5;


@end
