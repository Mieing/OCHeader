@class CommonLiveTabGuideData;

@interface CommonLiveTabGuideResponse : IESLivePBBaseMessage

@property (retain, nonatomic) CommonLiveTabGuideData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
