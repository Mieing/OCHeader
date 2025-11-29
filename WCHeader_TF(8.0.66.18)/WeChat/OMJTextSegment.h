@interface OMJTextSegment : OMJSegment {
    struct SharedPtr<XMJTextSegment> { struct XMJTextSegment *_ptr; } _backingTextSegment;
}

- (id)initWithBackingSegment:(const void *)a0;
- (id)text;
- (BOOL)updataText:(id)a0 shouldCommit:(BOOL)a1;
- (id)textStyles;
- (id)layerStyles;
- (void)updateTextStyles:(id)a0 layerStyles:(id)a1 shouldCommit:(BOOL)a2;
- (id)spatialInfo;
- (BOOL)setSpatialInfo:(id)a0 shouldCommit:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
