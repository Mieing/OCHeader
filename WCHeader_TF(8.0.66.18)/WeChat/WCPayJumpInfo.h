@class NSString;

@interface WCPayJumpInfo : NSObject

@property unsigned int type;
@property (retain) NSString *url;
@property (retain) NSString *username;
@property (retain) NSString *appid;
@property (retain) NSString *pagepath;
@property (retain) NSString *query;
@property (retain) NSString *minVersion;

+ (id)genFromUnion:(id)a0;

- (void).cxx_destruct;

@end
