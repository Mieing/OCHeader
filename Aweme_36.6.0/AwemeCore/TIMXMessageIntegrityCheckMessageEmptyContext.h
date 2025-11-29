@class NSArray, NSString, NSNumber;

@interface TIMXMessageIntegrityCheckMessageEmptyContext : NSObject

@property (copy, nonatomic) NSArray *messages;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (copy, nonatomic) NSArray *continueRanges;
@property (copy, nonatomic) NSArray *emptyRanges;
@property (retain, nonatomic) NSNumber *dbHasMore;

- (void).cxx_destruct;

@end
