@class NSString, UIView;

@interface WCTableViewCellCustomConfig : NSObject

@property (nonatomic) SEL makeCellSel;
@property (weak, nonatomic) id makeCellTarget;
@property (retain, nonatomic) UIView *customView;
@property (nonatomic) long long accessoryType;
@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) NSString *accessoryLabel;

- (void)addMakeCellTarget:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;

@end
