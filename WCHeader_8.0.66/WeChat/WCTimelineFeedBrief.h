@class NSString;

@interface WCTimelineFeedBrief : NSObject

@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) BOOL isWeishange;

- (id)description;
- (void).cxx_destruct;

@end
