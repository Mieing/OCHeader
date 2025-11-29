@class NSString, NSArray;

@interface AWEExtraModelV2 : AWEBaseDataModel

@property (nonatomic) long long now;
@property (copy, nonatomic) NSString *logid;
@property (copy, nonatomic) NSArray *fatalItemIdsArray;
@property (copy, nonatomic) NSString *searchRequestId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
