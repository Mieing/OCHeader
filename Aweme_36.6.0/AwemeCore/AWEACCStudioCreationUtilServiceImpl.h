@class NSString;

@interface AWEACCStudioCreationUtilServiceImpl : NSObject <AWEStudioCreationUtilService>

@property (retain, nonatomic) id transcoderTask;
@property (nonatomic) BOOL exporting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transcoderForVideo:(id)a0 parameters:(id)a1;
- (id)p_transcoderErrorCode:(long long)a0 message:(id)a1;
- (void).cxx_destruct;

@end
