@class EnterpriseMemberViewItem;
@protocol EnterpriseMemberViewDelegate;

@interface EnterpriseMemberView : MMUIView {
    EnterpriseMemberViewItem *_viewItem;
}

@property (weak, nonatomic) id<EnterpriseMemberViewDelegate> delegate;

- (id)initWithMemberViewItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)initView;
- (id)getEnterpriseUserName;
- (BOOL)isDeleteSmallButtonHidden;
- (void)setDeleteSmallButtonHidden:(BOOL)a0;
- (void)onClickHeadImage;
- (void)onLongPressHeadImage:(id)a0;
- (void)onAddMember;
- (void)onDeleteMember;
- (void).cxx_destruct;

@end
