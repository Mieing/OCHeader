@class NSString;

@interface IESLiveInteractPureRTCVideoSink : NSObject <ByteRTCVideoSinkDelegate>

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) id /* block */ videoFrameCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserId:(id)a0 block:(id /* block */)a1;
- (void)onFrame:(id)a0;
- (void).cxx_destruct;

@end
