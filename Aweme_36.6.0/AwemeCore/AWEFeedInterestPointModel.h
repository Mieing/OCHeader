@class NSString, NSArray;

@interface AWEFeedInterestPointModel : AWEBaseBizConfigModel

@property (readonly, copy, nonatomic) NSString *interestPoint;
@property (readonly, copy, nonatomic) NSArray *itemIds;
@property (readonly, nonatomic) unsigned long long interestUV;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
