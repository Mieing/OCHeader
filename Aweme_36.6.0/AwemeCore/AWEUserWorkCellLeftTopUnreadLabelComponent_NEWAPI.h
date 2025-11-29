@class AWERLVirtualView, NSString;

@interface AWEUserWorkCellLeftTopUnreadLabelComponent_NEWAPI : AWEUserWorkCellUnreadLabelComponent_NEWAPI <AWEUserWorkCellComponentTrackProtocol>

@property (retain, nonatomic) AWERLVirtualView *diagnoseVirtualView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)trackParams;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
