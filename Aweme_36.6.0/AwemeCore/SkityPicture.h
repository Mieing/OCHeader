@interface SkityPicture : NSObject {
    struct unique_ptr<skity::DisplayList, std::default_delete<skity::DisplayList>> { struct DisplayList *__ptr_; } _displayList;
}

- (id)initWithDisplayList:(struct unique_ptr<skity::DisplayList, std::default_delete<skity::DisplayList>> { struct DisplayList *x0; })a0;
- (void).cxx_destruct;
- (void *)handler;
- (id).cxx_construct;

@end
