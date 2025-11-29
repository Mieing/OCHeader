@class AWEProfileHeaderContext, NSNumber, AWERLVirtualFlexView, NSString, AWERLVirtualLabel, AWEUserModel, AWERLVirtualButton;

@interface AWEProfileHeaderContactRemarkComponent_NEWAPI : AWEProfileHeaderBaseComponent <AWEUserMessage>

@property (retain, nonatomic) AWERLVirtualFlexView *virtualContainer;
@property (retain, nonatomic) AWERLVirtualLabel *virtualLabel;
@property (retain, nonatomic) AWERLVirtualButton *virtualButton;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEProfileHeaderContext *headerContext;
@property (nonatomic) BOOL hasChangedStatus;
@property (retain, nonatomic) NSNumber *enableShowEntrance;
@property (nonatomic) double contentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (id)buildVirtualView:(id)a0;
- (void)clickButton;
- (void)updateComponentData:(id)a0;
- (id)initWithData:(id)a0 context:(id)a1 maxWidth:(double)a2;
- (void)followStatusDidChange:(id)a0;
- (void).cxx_destruct;
- (id)labelFont;
- (void)dealloc;

@end
