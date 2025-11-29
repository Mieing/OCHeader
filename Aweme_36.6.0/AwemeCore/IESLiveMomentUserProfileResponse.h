@class IESLiveMomentUserProfileData;

@interface IESLiveMomentUserProfileResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveMomentUserProfileData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
