@class AWERLVirtualView, NSString;

@interface AWEUserWorkCellDiagnoseComponent_NEWAPI : AWEUserWorkCellBaseComponent <AWEUserWorkCellComponentProtocol>

@property (nonatomic) BOOL initedDiagnoseContent;
@property (retain, nonatomic) AWERLVirtualView *diagnoseVirtualView;
@property (copy, nonatomic) NSString *diagnoseContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;

@end
