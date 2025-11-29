@class NSOutputStream, NSString, BDPURLSessionTask;

@interface BDPUploadTaskOutputStream : NSObject <NSStreamDelegate>

@property (weak, nonatomic) BDPURLSessionTask *delegateTask;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOutputStream:(id)a0 Delegate:(id)a1;
- (void)close;
- (void).cxx_destruct;
- (void)open;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;

@end
