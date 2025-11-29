@class NSString, NSNumber;

@interface MegaVideoPlayItem : NSObject

@property (copy, nonatomic) NSString *finder_object_nonce_id;
@property (copy, nonatomic) NSString *finder_object_id;
@property (retain, nonatomic) NSNumber *videoScrWidth;
@property (retain, nonatomic) NSNumber *videoScrHeight;

+ (id)makeWithFinder_object_nonce_id:(id)a0 finder_object_id:(id)a1 videoScrWidth:(id)a2 videoScrHeight:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
