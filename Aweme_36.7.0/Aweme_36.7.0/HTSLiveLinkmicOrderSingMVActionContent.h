@class NSString, HTSLiveOrderSingMVInfo;

@interface HTSLiveLinkmicOrderSingMVActionContent : IESLivePBBaseMessage

@property (nonatomic) int mvOp;
@property (retain, nonatomic) HTSLiveOrderSingMVInfo *mvInfo;
@property (nonatomic) BOOL hasMvInfo;
@property (copy, nonatomic) NSString *opToast;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *singerId;
@property (copy, nonatomic) NSString *opSource;

+ (id)descriptor;

@end
