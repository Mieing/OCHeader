@class NSArray, NSError, NSDate;

@interface AWEFamiliarFeedPreloadResponse : NSObject

@property (retain, nonatomic) NSArray *cardList;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDate *fetchDate;
@property (nonatomic) BOOL hasFinishedInitFetch;

- (void).cxx_destruct;

@end
