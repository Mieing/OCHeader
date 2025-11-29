@class NSArray, NSString;

@interface HTSLiveRoomGiftPagesDataModel : NSObject

@property (nonatomic) long long fetchSource;
@property (nonatomic) double fetchTimeInterval;
@property (copy, nonatomic) NSArray *giftPages;
@property (copy, nonatomic) NSString *logID;

- (id)initWithGiftPages:(id)a0 fetchSource:(long long)a1 logID:(id)a2;
- (void).cxx_destruct;

@end
