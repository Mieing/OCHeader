@class UILabel, NSString;

@interface CECMomentTextPublishSnapshotView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *text;

- (id)initWithText:(id)a0 backgroundColor:(id)a1;
- (void).cxx_destruct;
- (id)snapshot;
- (void)setupUI;

@end
