@class NSString;

@interface WCFinderFeedStickerInfo : NSObject

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *productId;

+ (id)stickerInfoFromInfoString:(id)a0;

- (id)covertToJsonString;
- (void).cxx_destruct;

@end
