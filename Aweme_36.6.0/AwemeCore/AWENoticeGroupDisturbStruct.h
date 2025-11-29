@class NSString, NSNumber;

@interface AWENoticeGroupDisturbStruct : IESIMBaseApiModel

@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSNumber *groupDisturbStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isDisturb;
- (void).cxx_destruct;

@end
