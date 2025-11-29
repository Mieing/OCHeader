@class AWECommentLongPressPanelContext;

@interface AWECommentSearchSwiftImpl.CommentLongPressPanelPictureSearchElement : AWERLComponent2 <AWECommentLongPressPanelElementViewModelProtocol> {
    void /* unknown type, empty encoding */ hasDisplayed;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ hasReportedShowTrace;
    void /* unknown type, empty encoding */ hasReportedTagShowTrace;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bgImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_infoImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_describeString;
}

@property (nonatomic, retain) AWECommentLongPressPanelContext *commentPageContext;
@property (nonatomic) BOOL horizonMode;
@property (nonatomic) BOOL showRedPoint;

- (id)elementImage;
- (id)elementContent;
- (unsigned long long)elementContentStyle;
- (unsigned long long)elementInteractionStyle;
- (void)elementWillDisplay:(long long)a0;
- (BOOL)elementShouldShow;
- (void)elementTapped;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)elementType;
- (id)customView;

@end
