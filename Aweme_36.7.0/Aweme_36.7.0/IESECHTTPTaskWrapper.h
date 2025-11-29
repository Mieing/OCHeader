@class TTHttpTask, NSString;

@interface IESECHTTPTaskWrapper : NSObject <IESECHTTPRequestTask>

@property (retain, nonatomic) TTHttpTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapper:(id)a0;

@end
