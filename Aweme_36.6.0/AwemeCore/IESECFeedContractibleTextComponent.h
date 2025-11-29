@protocol IESECFeedContractibleTextComponentDelegate;

@interface IESECFeedContractibleTextComponent : YYLabel <IESECLLComponent>

@property (retain, nonatomic) id<IESECFeedContractibleTextComponentDelegate> delegate;

+ (id /* block */)descWithModel:(id)a0;
+ (id)yy_attachmentStringWithContent:(id)a0 contentMode:(long long)a1 attachmentSize:(struct CGSize { double x0; double x1; })a2 alignToFont:(id)a3 alignment:(long long)a4 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a5;

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;

@end
