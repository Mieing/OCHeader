@class NSString, NSMutableAttributedString;

@interface QuotedView : UIView {
    void /* unknown type, empty encoding */ cellConfig;
    void /* unknown type, empty encoding */ cellHelper;
    void /* unknown type, empty encoding */ itemUserID;
    void /* function */ quotedReplyName;
    void /* function */ quotedTagText;
    void /* unknown type, empty encoding */ replyUserTappedBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_replyNameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_replyAuthorTagLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_replyFollowerOrNearbyTagLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_replyCommentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verticalLayer;
}

@property (nonatomic, copy) NSString *quotedReplyName;
@property (nonatomic, retain) NSMutableAttributedString *quotedDisplayAttrContent;
@property (nonatomic) long long quotedTagType;
@property (nonatomic, copy) NSString *quotedTagText;

- (void)replyUserTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
