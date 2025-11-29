@class NSString, NSArray;

@interface AWEMessageReadSwitchModel : AWEBaseApiModel

@property (nonatomic) long long msgId;
@property (nonatomic) long long convShortId;
@property (copy, nonatomic) NSString *convId;
@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSArray *onUidList;
@property (copy, nonatomic) NSArray *offUidList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
