@interface WCMomentsContactTagBaseCell : MMTableViewCell

@property (copy, nonatomic) id /* block */ detailCallback;

- (id)genMemberLabel;
- (id)genRightDetailBtn;
- (id)getMemberDescWithTagData:(id)a0;
- (long long)getMaxMemberCount;
- (void)onClickContactTagDetail:(id)a0;
- (void).cxx_destruct;

@end
