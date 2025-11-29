@class NSString;

@interface AWECommerceRouter : HTSService <AWECommerceRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)transferToURLString:(id)a0 aweme:(id)a1 completion:(id /* block */)a2;
+ (id)transitionWithURLString:(id)a0 aweme:(id)a1;
+ (BOOL)transferToURLString:(id)a0 aweme:(id)a1;
+ (BOOL)transferToAweme:(id)a0 urlStringWithFormat:(id)a1;
+ (id)transition:(id)a0 withFormat:(id)a1;
+ (BOOL)verifyIsAbnormalWithAweme:(id)a0;


@end
