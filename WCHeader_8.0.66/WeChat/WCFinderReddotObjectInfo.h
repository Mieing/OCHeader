@class NSString, NSData;

@interface WCFinderReddotObjectInfo : NSObject

@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *nonceId;
@property (copy, nonatomic) NSString *containerId;
@property (nonatomic) int tabType;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;

- (BOOL)hasPinToTopFeed;
- (long long)finderTabType;
- (id)description;
- (void).cxx_destruct;

@end
