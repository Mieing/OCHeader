@class EntranceVisibleV2Response_Data;

@interface EntranceVisibleV2Response : IESLivePBBaseMessage

@property (retain, nonatomic) EntranceVisibleV2Response_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
