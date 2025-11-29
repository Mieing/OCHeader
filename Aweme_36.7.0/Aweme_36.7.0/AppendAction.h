@class NSOperationQueue, NSObject;

@interface AppendAction : NSObject

@property (retain) NSOperationQueue *deviceTaskQueue;
@property BOOL isInitProcessing;
@property (retain) NSObject *deviceLock;
@property BOOL isInitSuccessed;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)init:(id)a0 :(id /* block */)a1;
- (int)buildObject:(id)a0;
- (BOOL)textSpan:(id)a0 :(id /* block */)a1;
- (void)dispense:(id)a0 :(id /* block */)a1;
- (void)init:(id)a0 withOptions:(id)a1 callback:(id /* block */)a2;
- (void)getNameTable:(id)a0 SiAnchor:(id /* block */)a1;
- (id)FaMizuni;
- (void)reportUserData:(int)a0 :(id)a1;
- (void)reportMoment;
- (id)MdOutlineCottage:(id)a0 optionsMenu:(id)a1;
- (id)outputDescisAry;
- (void)AiFillMoneyCollect:(id)a0;
- (BOOL)prevIsBindLAMBDA;
- (void)quoteAttributeValue:(BOOL)a0;
- (BOOL)getVirtualnewAB;
- (void)handleMonitorReply:(BOOL)a0;
- (void).cxx_destruct;
- (id)getVersion;
- (id)getSessionId;
- (id)getSession;

@end
