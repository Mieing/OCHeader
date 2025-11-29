@class NSString, NSDictionary;

@interface AWEFeedPlayableTestTrackContext : NSObject

@property (copy, nonatomic) NSString *playableUrl;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;

@end
