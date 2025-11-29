@class AWEAwemeModel;

@interface AWEMultiContentImpl.StoryAlbumSectionViewModel : AWEMultiContentImpl.AlbumSectionViewModel {
    void /* unknown type, empty encoding */ isActiveIgnoreVCJudge;
}

@property (nonatomic, readonly) AWEAwemeModel *aweme;
@property (nonatomic, readonly) long long itemCount;

- (id)awemeModelForFinishTrackTrigger;
- (id)init;

@end
