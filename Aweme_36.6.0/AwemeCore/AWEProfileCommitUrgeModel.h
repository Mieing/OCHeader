@class AWEProfileUrgeControlModel;

@interface AWEProfileCommitUrgeModel : AWEBaseApiModel

@property (nonatomic) BOOL canSendGift;
@property (retain, nonatomic) AWEProfileUrgeControlModel *controlModel;

+ (id)controlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
