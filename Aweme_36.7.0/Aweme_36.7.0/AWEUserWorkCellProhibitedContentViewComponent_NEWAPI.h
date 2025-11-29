@class AWERLVirtualView, NSString, AWEProhibitedContentDouyinView;

@interface AWEUserWorkCellProhibitedContentViewComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellComponentProtocol>

@property (retain, nonatomic) AWERLVirtualView *prohibitedContentVirtualView;
@property (weak, nonatomic) AWEProhibitedContentDouyinView *douyinView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (BOOL)dynamicComponent;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;

@end
