@interface OMJStickerSegment : OMJSegment {
    struct SharedPtr<XMJStickerSegment> { struct XMJStickerSegment *_ptr; } _backingStickerSegment;
}

- (id)initWithBackingSegment:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
