@class AWEOpenAuthInfoDetail;

@interface AWEOpenAuthInfoResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEOpenAuthInfoDetail *detailModel;

+ (id)detailModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
