@class NSString;

@interface WCFinderFeedHighlightItem : NSObject

@property (nonatomic) unsigned int beginTimestamp;
@property (nonatomic) unsigned int endTimestamp;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *uniqId;

- (id)initWithLiveHighlightInfo:(id)a0;
- (void).cxx_destruct;

@end
