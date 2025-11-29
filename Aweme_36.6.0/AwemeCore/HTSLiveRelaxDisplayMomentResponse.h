@class HTSLiveRelaxDisplayMomentData;

@interface HTSLiveRelaxDisplayMomentResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRelaxDisplayMomentData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
