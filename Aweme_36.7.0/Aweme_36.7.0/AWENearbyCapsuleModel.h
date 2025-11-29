@class NSString, AWEURLModel;

@interface AWENearbyCapsuleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *iconURLModel;
@property (copy, nonatomic) NSString *outerShowReq;
@property (copy, nonatomic) NSString *buttonNameL3;

+ (id)iconURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
