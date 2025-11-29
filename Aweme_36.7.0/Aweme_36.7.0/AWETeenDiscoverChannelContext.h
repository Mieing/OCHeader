@class NSString, NSMutableDictionary;

@interface AWETeenDiscoverChannelContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *params;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *channelName;
@property (nonatomic) unsigned long long channelIndex;
@property (nonatomic) long long channelKind;
@property (nonatomic) long long enterMethod;
@property (nonatomic) BOOL isPush;
@property (nonatomic) BOOL isClickGuideCard;
@property (nonatomic) BOOL channalTopResouceHighlight;

- (id)trackParams;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
