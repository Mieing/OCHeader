@class NSArray, NSString, NSDictionary;

@interface AWETeenSearchGuessViewModel : NSObject

@property (copy, nonatomic) NSArray *guessWordList;
@property (copy, nonatomic) NSString *suggestLogId;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL isFirst;

- (void)fetchAfterWatchKeyWordListCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
