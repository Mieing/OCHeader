@class NSString;

@interface AWECommentAdComponent : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *adPageID;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *clickID;
@property (copy, nonatomic) NSString *advertiserID;
@property (copy, nonatomic) NSString *adComponentID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
