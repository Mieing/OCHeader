@class NSDictionary, NSArray, NSString;

@interface AWEDCFeedCellSearchAfterWatchConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (nonatomic) long long freezeCloseFreq;
@property (nonatomic) double freezeTimestamp;
@property (copy, nonatomic) NSArray *showElements;
@property (copy, nonatomic) NSString *wordsSource;

- (void).cxx_destruct;

@end
