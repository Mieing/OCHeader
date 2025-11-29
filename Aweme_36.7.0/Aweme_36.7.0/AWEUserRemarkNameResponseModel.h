@class NSString;

@interface AWEUserRemarkNameResponseModel : AWEBaseApiModel

@property (readonly, nonatomic) NSString *remarkName;
@property (readonly, nonatomic) BOOL isCert;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
