@class UpdateCreateInfoResponse_UpdateCreateInfoData;

@interface UpdateCreateInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UpdateCreateInfoResponse_UpdateCreateInfoData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
