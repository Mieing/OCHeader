@class InteractionPluginDetailData;

@interface InteractionPluginDetailResponse : IESLivePBBaseMessage

@property (retain, nonatomic) InteractionPluginDetailData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
