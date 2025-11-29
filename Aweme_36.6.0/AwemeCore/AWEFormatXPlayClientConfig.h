@class NSString, NSDictionary;

@interface AWEFormatXPlayClientConfig : NSObject

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) double displayWidth;
@property (nonatomic) double displayHeight;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) unsigned long long pcDisplayWidthRatio;
@property (nonatomic) unsigned long long pcDisplayHeightRatio;
@property (copy, nonatomic) NSString *uniqueRoomId;

- (void).cxx_destruct;
- (id)init;

@end
