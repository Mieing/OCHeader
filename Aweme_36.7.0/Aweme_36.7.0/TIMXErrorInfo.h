@class NSString;

@interface TIMXErrorInfo : NSObject <TIMXErrorInfoProtocol>

@property (copy, nonatomic) NSString *logId;
@property (nonatomic) int statusCode;
@property (nonatomic) long long bodyStatus;
@property (nonatomic) long long bodyCheckCode;
@property (copy, nonatomic) NSString *bodyCheckMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
