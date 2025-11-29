@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface UDRReportHelper : MMUserService <MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    double randomNum;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)report30863Check:(id)a0 name:(id)a1 version:(int)a2 remoteVersion:(int)a3 scene:(long long)a4 state:(int)a5 errNo:(int)a6 errCode:(int)a7 timeStamp:(unsigned int)a8 sampleRate:(float)a9;
- (void)report30863CheckFail:(id)a0 reqItems:(id)a1 scene:(long long)a2 state:(int)a3 errNo:(int)a4 errCode:(int)a5 timeStamp:(unsigned int)a6;
- (void)report30863Download:(id)a0 state:(int)a1 errNo:(int)a2 errCode:(int)a3 timeStamp:(unsigned int)a4 sampleRate:(float)a5;
- (void)report30863Update:(id)a0 state:(int)a1 errNo:(int)a2 errCode:(int)a3 timeStamp:(unsigned int)a4 sampleRate:(float)a5;
- (void)report30863Clean:(id)a0 name:(id)a1 version:(int)a2;
- (void)report30863UserClean:(id)a0;
- (long long)getDuration:(unsigned int)a0;
- (unsigned char)sampleReport:(float)a0;
- (void)report30863:(id)a0 resourceName:(id)a1 version:(long long)a2 remoteVersion:(long long)a3 scene:(long long)a4 state:(long long)a5 errNo:(long long)a6 errCode:(long long)a7 duration:(long long)a8 sampleRate:(float)a9;
- (void).cxx_destruct;

@end
