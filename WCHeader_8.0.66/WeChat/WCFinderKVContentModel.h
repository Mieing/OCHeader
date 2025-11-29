@class NSString;

@interface WCFinderKVContentModel : NSObject

@property (copy, nonatomic) NSString *reportContent;
@property (nonatomic) unsigned long long renderSuc;
@property (nonatomic) unsigned long long textLineNumber;
@property (nonatomic) unsigned long long remakeFlag;
@property (nonatomic) BOOL useOriginalNode;
@property (copy, nonatomic) NSString *reddotShowContent;
@property (copy, nonatomic) NSString *renderStrategyId;

- (id)init;
- (void).cxx_destruct;

@end
