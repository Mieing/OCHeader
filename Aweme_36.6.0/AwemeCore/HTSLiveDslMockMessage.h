@class DSLDetail, HTSLiveCommon;

@interface HTSLiveDslMockMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) DSLDetail *dslDetail;
@property (nonatomic) BOOL hasDslDetail;

+ (id)descriptor;

@end
