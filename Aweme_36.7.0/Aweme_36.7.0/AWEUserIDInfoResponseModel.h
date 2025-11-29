@class NSString;

@interface AWEUserIDInfoResponseModel : AWEBaseApiModel

@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSString *secUserID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
