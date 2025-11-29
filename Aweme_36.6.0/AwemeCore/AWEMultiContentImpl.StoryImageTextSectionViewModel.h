@class AWEAwemeModel;

@interface AWEMultiContentImpl.StoryImageTextSectionViewModel : AWEMultiContentImpl.ImageTextNewAdapterSectionViewModel {
    void /* unknown type, empty encoding */ isActiveIgnoreVCJudge;
}

@property (nonatomic, readonly) AWEAwemeModel *aweme;
@property (nonatomic, readonly) long long itemCount;

- (id)awemeModelForFinishTrackTrigger;

@end
