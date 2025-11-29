@class NSString, WCFinderFeedContentVM;

@interface WCFinderMJSetOptionalParams : NSObject

@property (nonatomic) long long enterSource;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *sourceFeedId;
@property (retain, nonatomic) WCFinderFeedContentVM *sourceFeedContentVM;

- (void).cxx_destruct;

@end
