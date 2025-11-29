@class NSString, IESECWinContext, IESECWinLivingTitleObject;

@interface IESECWinLivingTitleSectionController : IGListSectionController <IESECWinContextProtocol> {
    IESECWinLivingTitleObject *_object;
    IESECWinContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
