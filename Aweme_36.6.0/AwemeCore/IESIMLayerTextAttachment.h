@interface IESIMLayerTextAttachment : IESIMUITextAttachment

- (void)addUIElementToContainer:(id)a0 attachmentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeUIElementIfNeededFromContainer:(id)a0;
- (unsigned long long)uiType;

@end
