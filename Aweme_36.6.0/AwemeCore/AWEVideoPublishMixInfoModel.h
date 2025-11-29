@class NSString;

@interface AWEVideoPublishMixInfoModel : NSObject

@property (copy, nonatomic) NSString *mixID;
@property (copy, nonatomic) NSString *mixName;
@property (nonatomic) long long mixIndex;
@property (nonatomic) long long mixScene;
@property (nonatomic) BOOL isCreatedSoon;
@property (copy, nonatomic) NSString *coverURLString;
@property (nonatomic) BOOL useDemotion;
@property (nonatomic) long long chargeType;
@property (nonatomic) long long chargeStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
