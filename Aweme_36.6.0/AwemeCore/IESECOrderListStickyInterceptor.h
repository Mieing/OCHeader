@class NSString;
@protocol YataRenderObjectInterface;

@interface IESECOrderListStickyInterceptor : NSObject <YataInterceptorInterface>

@property (retain, nonatomic) id<YataRenderObjectInterface> stickyObject;
@property (retain, nonatomic) id<YataRenderObjectInterface> stickyObjectInBody;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithRenderObject:(id)a0;
- (void).cxx_destruct;

@end
