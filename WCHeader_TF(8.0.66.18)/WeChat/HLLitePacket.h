@class NSError, NSString, NSData, NSDate, HLCarriorInfo, NSDictionary, NSObject, NSURLSessionDataTask;
@protocol OS_dispatch_queue;

@interface HLLitePacket : NSObject

@property (nonatomic) long long appID;
@property (readonly, nonatomic) unsigned long long seq;
@property (nonatomic) BOOL banReport;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) NSString *httpURL;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSDictionary *httpReqHeaders;
@property (copy, nonatomic) NSData *httpBody;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) HLCarriorInfo *carrior;
@property (retain, nonatomic) NSDate *firstInitDate;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSError *reportError;
@property (nonatomic) BOOL finish;
@property (nonatomic) BOOL inCall;
@property (nonatomic) long long retryTimes;
@property (retain, nonatomic) NSString *serverIP;
@property (nonatomic) long long recvlength;
@property (retain, nonatomic) NSURLSessionDataTask *task;

- (id)init;
- (void).cxx_destruct;

@end
