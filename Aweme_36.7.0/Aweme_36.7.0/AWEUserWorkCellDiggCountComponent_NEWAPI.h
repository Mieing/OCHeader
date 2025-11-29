@class NSString, AWERLVirtualFlexView, AWERLVirtualLabel, AWERLVirtualImageView;

@interface AWEUserWorkCellDiggCountComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellComponentProtocol>

@property (retain, nonatomic) AWERLVirtualFlexView *containerVirtualView;
@property (retain, nonatomic) AWERLVirtualImageView *diggIconVirtualView;
@property (retain, nonatomic) AWERLVirtualLabel *diggCountVirtualView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPostWorkViewControllerAdapterClass;
+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildVirtualView:(id)a0;
- (id)aAWEPostWorkViewControllerAdapter;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;
- (void)updateUI;

@end
