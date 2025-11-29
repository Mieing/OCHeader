@class NSString;

@interface IESLiveKTVRecommendItem : IESLiveSongBaseItem

@property (copy, nonatomic) NSString *displayTimeLabel;
@property (nonatomic) BOOL showOrderCount;
@property (nonatomic) BOOL isOptimizeMode;
@property (nonatomic) double titleLabelMaxWidth;
@property (copy, nonatomic) NSString *searchWord;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabDescription;
@property (nonatomic) BOOL isHighScoreSong;

+ (id)buildDefaultItem:(id)a0;

- (Class)classForItem;
- (void).cxx_destruct;

@end
