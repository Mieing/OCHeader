@class NSString;

@interface AWEECSingleGoodsCardService : HTSService <AWEECSingleGoodsCardService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowSingleCardViewWithModel:(id)a0;
- (void)prefetchGoodsModelWithModel:(id)a0 sourcePage:(id)a1;

@end
