@class CJIAPSignResult_IAPSignData;

@interface CJIAPSignResult : IESLivePBBaseMessage

@property (retain, nonatomic) CJIAPSignResult_IAPSignData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
