@class NSString, NSMutableArray;

@interface YataInterceptorCenter : YataModule <YataInterceptorCenterInterface>

@property (retain, nonatomic) NSMutableArray *interceptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerInterceptor:(id)a0;
- (void)unregisterInterceptor:(id)a0;
- (id)initWithYataInstance:(id)a0;
- (void)executeWithStructNode:(id)a0;
- (BOOL)isEmptyInterceptors;
- (void).cxx_destruct;

@end
