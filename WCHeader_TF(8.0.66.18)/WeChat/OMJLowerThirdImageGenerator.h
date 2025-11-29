@interface OMJLowerThirdImageGenerator : NSObject

@property (nonatomic) struct SharedPtr<XMJLowerThirdImageGenerator> { struct XMJLowerThirdImageGenerator *_ptr; } backingImageGenerator;

- (id)init;
- (void)dealloc;
- (BOOL)registerLowerThirdWithID:(id)a0 path:(id)a1 error:(id *)a2;
- (BOOL)registerFontWithName:(id)a0 path:(id)a1 error:(id *)a2;
- (id)getFontNamesForLowerThirdWithID:(id)a0;
- (void)generateWithLowerThirdID:(id)a0 userInputData:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 scaleMode:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)generateWithLowerThirdID:(id)a0 userInputData:(id)a1 maxPointSize:(double)a2 scaleFactor:(double)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
