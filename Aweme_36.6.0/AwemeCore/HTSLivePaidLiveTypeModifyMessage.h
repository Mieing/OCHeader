@class HTSLivePaidLiveTypeModifyData, HTSLiveCommon;

@interface HTSLivePaidLiveTypeModifyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLivePaidLiveTypeModifyData *paidLiveTypeModifyData;
@property (nonatomic) BOOL hasPaidLiveTypeModifyData;

+ (id)descriptor;

@end
