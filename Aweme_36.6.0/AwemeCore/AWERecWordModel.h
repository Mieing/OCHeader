@class NSString, AWERecWordLocalStatusModel;

@interface AWERecWordModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long createTime;
@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (nonatomic) long long userReaction;
@property (retain, nonatomic) AWERecWordLocalStatusModel *localStatus;
@property (nonatomic) BOOL recordWordAlreadyDisappear;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
