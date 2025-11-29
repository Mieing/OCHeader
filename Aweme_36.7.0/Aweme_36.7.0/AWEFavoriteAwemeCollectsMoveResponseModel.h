@class NSNumber, NSString, NSArray;

@interface AWEFavoriteAwemeCollectsMoveResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *favoriteStatusCode;
@property (retain, nonatomic) NSString *favoriteStatusMsg;
@property (retain, nonatomic) NSString *logid;
@property (retain, nonatomic) NSArray *existedItemIds;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
