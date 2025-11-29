@class NSString, UIView;
@protocol IESLivePrivilegeEntranceProfileViewEventHandler, IESLivePrivilegeEntranceSubviewDelegate;

@interface IESLivePrivilegeEntranceView : UIView <IESLiveRoomProfileButtonDelegate>

@property (nonatomic) long long entranceType;
@property (retain, nonatomic) UIView *singleEntrance;
@property (retain, nonatomic) UIView<IESLivePrivilegeEntranceSubviewDelegate> *singleView;
@property (retain, nonatomic) UIView *doubleEntranceLeft;
@property (retain, nonatomic) UIView<IESLivePrivilegeEntranceSubviewDelegate> *leftView;
@property (retain, nonatomic) UIView *doubleEntranceRight;
@property (retain, nonatomic) UIView<IESLivePrivilegeEntranceSubviewDelegate> *rightView;
@property (weak, nonatomic) id<IESLivePrivilegeEntranceProfileViewEventHandler> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidShowOnContainer:(id)a0;
- (void)viewDidHideFromContainer:(id)a0;
- (id)initWithEntranceType:(long long)a0 diContext:(id)a1;
- (void)setSingleEntranceView:(id)a0;
- (void)setDoubleEntranceLeft:(id)a0 right:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (void)setupUI;

@end
