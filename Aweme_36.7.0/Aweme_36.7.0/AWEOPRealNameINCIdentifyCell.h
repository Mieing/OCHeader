@class UILabel, UIImageView;

@interface AWEOPRealNameINCIdentifyCell : UIView

@property (retain, nonatomic) UILabel *name;
@property (retain, nonatomic) UILabel *phone;
@property (retain, nonatomic) UIImageView *checkImage;
@property (retain, nonatomic) UILabel *identifyLabel;

- (void)updateWithName:(id)a0 phone:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
