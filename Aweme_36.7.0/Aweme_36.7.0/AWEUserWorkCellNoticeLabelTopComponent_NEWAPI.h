@class AWERLVirtualView, NSString;

@interface AWEUserWorkCellNoticeLabelTopComponent_NEWAPI : AWEUserWorkCellNoticeLabelComponent_NEWAPI <AWEUserWorkCellComponentTrackProtocol>

@property (retain, nonatomic) AWERLVirtualView *noticeLabelVirtualView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildVirtualView:(id)a0;
- (id)trackParams;
- (id)createTag;
- (BOOL)canShowNoticeLabel;
- (void)updateTagTitle:(id)a0;
- (void).cxx_destruct;

@end
