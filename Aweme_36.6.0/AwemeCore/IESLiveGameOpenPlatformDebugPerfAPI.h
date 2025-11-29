@class NSNumber, NSString;

@interface IESLiveGameOpenPlatformDebugPerfAPI : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *appVersion;

+ (id)baseURL;

- (id)initWithRoomId:(id)a0 appId:(id)a1 taskId:(id)a2 appVersion:(id)a3;
- (void)startPerformanceTestWithCallback:(id /* block */)a0;
- (void)queryPerformanceTestWithCallback:(id /* block */)a0;
- (void)uploadPerformanceDataWithData:(id)a0 callback:(id /* block */)a1;
- (void)stopPerformanceTestWithCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
