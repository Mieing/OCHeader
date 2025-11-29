@interface AWEStudioEditImpl.AESoundFXListSectionController : AWEBaseListSectionController {
    void /* unknown type, empty encoding */ selectedItem;
    void /* unknown type, empty encoding */ applyedItem;
    void /* unknown type, empty encoding */ tabItem;
}

- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (BOOL)enableMovementAtIndex:(long long)a0 model:(id)a1;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
