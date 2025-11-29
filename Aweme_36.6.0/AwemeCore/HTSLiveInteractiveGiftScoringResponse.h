@class HTSLiveInteractiveGiftScoringResponse_Data;

@interface HTSLiveInteractiveGiftScoringResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveInteractiveGiftScoringResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
