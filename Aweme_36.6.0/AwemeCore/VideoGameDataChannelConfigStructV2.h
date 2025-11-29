@class NSString;

@interface VideoGameDataChannelConfigStructV2 : GPBMessage

@property (copy, nonatomic) NSString *gumId;
@property (nonatomic) BOOL hasGumId;
@property (copy, nonatomic) NSString *gameId;
@property (nonatomic) BOOL hasGameId;
@property (nonatomic) long long videoStayLimit;
@property (nonatomic) BOOL hasVideoStayLimit;

+ (id)descriptor;

@end
