@class NSString, IESIMURLModel;

@interface AWEIMMixTaskDetailModelSlotModel : NSObject

@property (nonatomic) long long userId;
@property (nonatomic) long long roleType;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) IESIMURLModel *modelCover;
@property (nonatomic) long long avgAge;
@property (copy, nonatomic) NSString *gender;
@property (nonatomic) long long modelStatus;

- (void).cxx_destruct;

@end
