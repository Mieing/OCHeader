@class NSString;

@interface MMFinderLiveGiftResCacheInfo : NSObject

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *fileMd5;
@property (nonatomic) BOOL purgeIfUnused;
@property (nonatomic) BOOL usageFlag;

- (void).cxx_destruct;

@end
