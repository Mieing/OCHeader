@interface IESLiveAioLinkNativeServiceHandler : IESLiveAioLinkBaseServiceHandler

@property (nonatomic) BOOL isGlobalService;
@property (nonatomic) BOOL useCurrentDI;

- (void)process:(id)a0 params:(id)a1 error:(id)a2 tag:(id)a3 returnContentType:(unsigned long long)a4;
- (void)updateLynxHandleWithView:(id)a0;
- (id)getObjWithServiceMethod:(id)a0 diContext:(id)a1;
- (id)initWithGlobalService:(id)a0;

@end
