@class MMUILabel, UIImageView, UIView, UIButton;

@interface WCSelectGroupDemoCell : MMTableViewCell {
    UIImageView *leftCheckMark;
    UIImageView *rightArrowView;
    UIButton *rightDetailBtn;
    UIView *lineView;
    UIView *headLineView;
    MMUILabel *nameLabel;
    MMUILabel *memberLabel;
}

@property (copy, nonatomic) id /* block */ detailCallback;
@property (nonatomic) BOOL detailDisabled;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)getMemberDesc:(id)a0;
- (void)updateCell:(int)a0 cellWidth:(double)a1 postPrivacy:(long long)a2 labelName:(id)a3 checked:(BOOL)a4 expandMode:(BOOL)a5 tempContacts:(id)a6 clickedDetail:(id /* block */)a7;
- (void)onClickContactDetail:(id)a0;
- (void).cxx_destruct;

@end
