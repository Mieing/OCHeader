@class NSString, NSData;

@interface WCFinderLiveStartLotteryProductInfo : NSObject

@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *platform;
@property (retain, nonatomic) NSData *productJumpInfo;

+ (id)getProductInfoWithNSDictionary:(id)a0;

- (void).cxx_destruct;

@end
