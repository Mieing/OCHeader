@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEEcomFakeAnchorStore : NSObject

@property (copy, nonatomic) NSString *currentGid;
@property (retain, nonatomic) NSMutableArray *guessWords;
@property (retain, nonatomic) NSMutableDictionary *impressionExtraInfo;

+ (id)sharedInstance;

- (void)updateFakeGuessWordsForWords:(id)a0 gid:(id)a1;
- (void)addImpressionExtraInfo:(id)a0 gid:(id)a1;
- (id)maskedSearchParamsForGid:(id)a0;
- (void)removeAllFakeWords;
- (void).cxx_destruct;
- (id)init;

@end
