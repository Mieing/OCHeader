@class NSString;

@interface WCGroupHint : NSObject

@property (nonatomic) unsigned int groupId;
@property (retain, nonatomic) NSString *topFeedId;
@property (retain, nonatomic) NSString *bottomFeedId;

- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
