@interface CJPayUnifyChangeVerifyTypeModel : NSObject

@property (nonatomic) unsigned long long fromVerifyType;
@property (nonatomic) unsigned long long toVerifyType;
@property (nonatomic) unsigned long long verifySourceType;
@property (copy, nonatomic) id data;
@property (nonatomic) BOOL isNeedToastData;

- (void).cxx_destruct;

@end
