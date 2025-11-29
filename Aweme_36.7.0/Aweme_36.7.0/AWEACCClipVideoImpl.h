@class NSString;

@interface AWEACCClipVideoImpl : NSObject <ACCClipVideoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clipViewController:(id)a0 maxClipDuration:(double)a1 croppingSize:(struct CGSize { double x0; double x1; })a2 clipedResultSavePath:(id)a3 allowFastImport:(BOOL)a4 allowSpeedControl:(BOOL)a5 inputData:(id)a6 completion:(id /* block */)a7;

@end
