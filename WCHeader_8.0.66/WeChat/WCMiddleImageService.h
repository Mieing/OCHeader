@class NSString, WCMiddleImageTaskOperation;

@interface WCMiddleImageService : MMUserService <WCMiddleImageTaskDelegate, MMServiceProtocol>

@property (retain, nonatomic) WCMiddleImageTaskOperation *taskOperation;
@property BOOL bInRunning;
@property (copy, nonatomic) id /* block */ finishAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportMiddleImageCompress;

@end
