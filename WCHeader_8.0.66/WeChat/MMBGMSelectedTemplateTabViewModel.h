@class OrderedDictionary, NSString;

@interface MMBGMSelectedTemplateTabViewModel : MMBGMSelectedTabViewModel

@property (retain, nonatomic) OrderedDictionary *musicInfoDictionary;
@property (copy, nonatomic) NSString *templateID;

- (id)initWithTemplateID:(id)a0 musicInfos:(id)a1;
- (unsigned long long)dataCount;
- (void)loadMoreData;
- (BOOL)hasMoreData;
- (id)dataAtIndex:(unsigned long long)a0;
- (void)addMusicData:(id)a0;
- (void)setMusicDataToFirst:(id)a0;
- (unsigned long long)indexOfMusicInfo:(id)a0;
- (void)addMusicInfos:(id)a0;
- (BOOL)isReccommentdTabModel;
- (void)videoProducerViewModel:(id)a0 didGetExtRecommendMusics:(id)a1 forTemplateID:(id)a2;
- (void).cxx_destruct;

@end
