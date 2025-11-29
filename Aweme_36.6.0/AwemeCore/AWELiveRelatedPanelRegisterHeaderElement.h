@interface AWELiveRelatedPanelRegisterHeaderElement : AWERelatedRecommendTopBaseElement <AWEUserMessage> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nickName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cicleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_followButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerTitleLabel;
}

@property (class, nonatomic, readonly) long long type;

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double bottomSpacing;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)followButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDataModel:(id)a0;
- (void)imageViewTapped:(id)a0;

@end
