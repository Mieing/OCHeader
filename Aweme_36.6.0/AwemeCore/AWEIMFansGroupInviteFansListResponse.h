@class NSArray;

@interface AWEIMFansGroupInviteFansListResponse : IESIMBaseApiModel

@property (nonatomic) long long remainingInvitableCount;
@property (copy, nonatomic) NSArray *fansInfoList;
@property (nonatomic) BOOL isBackUp;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
