@class NSArray, NSNumber, NSString;

@interface AWENewHotSpotFeedResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *cardList;
@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *defaultTabSeparationText;
@property (copy, nonatomic) NSString *channelExtendSeparationText;

+ (id)cardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
