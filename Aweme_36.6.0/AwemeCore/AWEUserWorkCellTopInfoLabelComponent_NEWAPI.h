@class AWERLVirtualView, NSString;

@interface AWEUserWorkCellTopInfoLabelComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellComponentProtocol>

@property (retain, nonatomic) AWERLVirtualView *topInfoLabelVirtualView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;
+ (id)labelText;

- (id)buildVirtualView:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
