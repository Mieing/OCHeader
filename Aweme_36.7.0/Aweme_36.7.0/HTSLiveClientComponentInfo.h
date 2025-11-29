@class DSLDetail, NSString, HTSLiveClientComponentFunctionInfo, HTSLiveContainerLayout;

@interface HTSLiveClientComponentInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *containerId;
@property (retain, nonatomic) HTSLiveClientComponentFunctionInfo *functionDetail;
@property (nonatomic) BOOL hasFunctionDetail;
@property (nonatomic) BOOL isOpen;
@property (retain, nonatomic) DSLDetail *dslDetail;
@property (nonatomic) BOOL hasDslDetail;
@property (copy, nonatomic) NSString *dslLayout;
@property (retain, nonatomic) HTSLiveContainerLayout *containerLayout;
@property (nonatomic) BOOL hasContainerLayout;

+ (id)descriptor;

@end
