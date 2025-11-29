@class NSString, NSNumber;

@interface AWEFeedGameCardModel : NSObject

@property (copy, nonatomic) NSString *mpID;
@property (copy, nonatomic) NSString *mpName;
@property (copy, nonatomic) NSString *gameType;
@property (retain, nonatomic) NSNumber *cardID;
@property (copy, nonatomic) NSString *cardType;
@property (nonatomic) BOOL isNewFeedCard;

+ (id)transferCardType:(long long)a0;
+ (id)modelWithJson:(id)a0;

- (void).cxx_destruct;

@end
