@class UIButton, NSArray, NSString, NSNumber, UIView, UILabel, NSMutableArray;

@interface IESLiveInteractEnlargeSelectGuestPanel : UIView <IESLiveInteractSelectSeatViewPanelItemDelegate>

@property (copy, nonatomic) NSArray *users;
@property (retain, nonatomic) NSString *guestID;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *middleContainer;
@property (retain, nonatomic) NSMutableArray *userViews;
@property (retain, nonatomic) UIView *bottomontainer;
@property (retain, nonatomic) UIButton *bottomBtn;
@property (nonatomic) BOOL isForKickOut;
@property (nonatomic) long long minSelectNum;
@property (nonatomic) long long maxSelectNum;
@property (retain, nonatomic) NSMutableArray *clickQueue;
@property (copy, nonatomic) id /* block */ kickOutAction;
@property (copy, nonatomic) id /* block */ swtcihAction;
@property (retain, nonatomic) NSNumber *toPos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)panelForSwtichWithUSers:(id)a0 action:(id /* block */)a1;
+ (id)panelForKickOutWithUSers:(id)a0 maxSelectNum:(long long)a1 action:(id /* block */)a2;

- (void)onItemClick:(id)a0;
- (id)initWithUSers:(id)a0;
- (void)onSelectUsers;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUpViews;
- (void)layoutItems;

@end
