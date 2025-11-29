@class NSString;

@interface CJPayCardOCRServiceImp : NSObject <CJPayCardOCRService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;

- (void)i_startCardOCRWithParam:(id)a0 completionBlock:(id /* block */)a1;

@end
