@class NSString, NSDictionary;

@interface AWEDPlayerFormatLoggerModel : NSObject

@property (nonatomic) long long level;
@property (nonatomic) long long reportLevel;
@property (nonatomic) long long playState;
@property (copy, nonatomic) NSString *where;
@property (copy, nonatomic) NSString *what;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *dplayer;
@property (copy, nonatomic) NSString *player;
@property (copy, nonatomic) NSString *simplayer;
@property (copy, nonatomic) NSString *ttplayer;
@property (copy, nonatomic) NSDictionary *extraDict;

- (void).cxx_destruct;

@end
