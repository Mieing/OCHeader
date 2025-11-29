@class NSString;

@interface IESIMVideoEditorService : HTSService <IESIMVideoEditorService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isHDRVideo:(id)a0;
- (id)transcodeStrategy:(id)a0;
- (struct CGSize { double x0; double x1; })videoSize:(id)a0;
- (double)boyProb:(id)a0;
- (id)decryptFileWithInputPath:(id)a0 outPutPath:(id)a1 decryptionKey:(id)a2 completion:(id /* block */)a3;
- (void)closeDecrypt:(id)a0;

@end
