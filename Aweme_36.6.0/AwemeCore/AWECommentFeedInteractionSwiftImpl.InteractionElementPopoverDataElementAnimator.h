@interface AWECommentFeedInteractionSwiftImpl.InteractionElementPopoverDataElementAnimator : NSObject <AWEInteractionElementPopoverDataElementAnimatorProtocol> {
    void /* unknown type, empty encoding */ currentView;
    void /* unknown type, empty encoding */ currentCustomView;
    void /* unknown type, empty encoding */ currentFocusIndex;
    void /* unknown type, empty encoding */ originWidth;
    void /* unknown type, empty encoding */ originX;
    void /* unknown type, empty encoding */ originAnchor;
    void /* unknown type, empty encoding */ initialIndex;
    void /* unknown type, empty encoding */ itemSize;
    void /* unknown type, empty encoding */ targetNeighborAnchorX;
    void /* unknown type, empty encoding */ targetMagnifyAnchorY;
    void /* unknown type, empty encoding */ targetRecoverAnchorX;
    void /* unknown type, empty encoding */ normalItemRecover;
    void /* unknown type, empty encoding */ magnifyScale;
    void /* unknown type, empty encoding */ customViewSize;
    void /* unknown type, empty encoding */ customViewTargetRecoverAnchorX;
}

@property (nonatomic) struct CGSize { double x0; double x1; } magnifyOffsize;

- (void)getFocusAt:(id)a0 contentCustom:(id)a1 container:(id)a2 index:(long long)a3 completion:(id /* block */)a4;
- (void)loseFocusFor:(id)a0 contentCustom:(id)a1 container:(id)a2 index:(long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
