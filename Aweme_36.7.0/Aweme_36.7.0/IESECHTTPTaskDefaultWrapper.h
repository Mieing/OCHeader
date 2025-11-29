@class TTHttpTask, NSString;

@interface IESECHTTPTaskDefaultWrapper : NSObject <IESECHTTPRequestTask>

@property (retain, nonatomic) TTHttpTask *rawTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWrapperWithHttpTask:(id)a0;

@end
