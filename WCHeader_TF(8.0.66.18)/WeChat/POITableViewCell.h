@class POITapGestureRecognizer, UIButton, NSString, UIView, NSIndexPath, UITableView;
@protocol POITableViewCellDelegate;

@interface POITableViewCell : MMTableViewCell <POITapGestureRecognizerDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) POITapGestureRecognizer *recognizer;
@property (weak, nonatomic) id<POITableViewCellDelegate> actionDelegate;
@property (weak, nonatomic) UITableView *myTableView;
@property (retain, nonatomic) NSIndexPath *myIndexPath;
@property (retain, nonatomic) UIView *mySelectedBackgroundView;
@property (retain, nonatomic) UIButton *selectedButt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)handleTableViewCellTapGesture:(id)a0;
- (void)setMySelectedBackgroundViewDisplay;
- (void)didTouchesBegan:(id)a0 withEvent:(id)a1;
- (void)didTouchesEnded:(id)a0 withEvent:(id)a1;
- (void)didTouchesCancelled:(id)a0 withEvent:(id)a1;
- (void)didTouchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
