@class AWERLVirtualView, NSString;

@interface AWEUserWorkCellMediaTypeViewComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellComponentProtocol>

@property (retain, nonatomic) AWERLVirtualView *mediaTypeViewVirtualView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

- (id)buildVirtualView:(id)a0;
- (void).cxx_destruct;

@end
