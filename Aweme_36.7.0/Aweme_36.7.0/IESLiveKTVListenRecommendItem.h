@class NSString;

@interface IESLiveKTVListenRecommendItem : IESLiveSongBaseItem

@property (nonatomic) double titleLabelMaxWidth;
@property (copy, nonatomic) NSString *searchWord;

+ (id)buildDefaultItem:(id)a0;

- (Class)classForItem;
- (void).cxx_destruct;

@end
