@class AWEMusicFeedViewModel, NSString, AWEAwemeModel;

@interface AWECommentGeneralMusicModel : AWEBaseApiModel

@property (nonatomic) unsigned long long modelType;
@property (retain, nonatomic) AWEAwemeModel *feedAwemeModel;
@property (retain, nonatomic) AWEMusicFeedViewModel *feedMusicModel;
@property (retain, nonatomic) NSString *songId;
@property (copy, nonatomic) id /* block */ miniPlayTrackParamsBlock;

- (void).cxx_destruct;

@end
