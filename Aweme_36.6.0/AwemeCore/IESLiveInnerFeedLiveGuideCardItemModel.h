@class NSString, FeedInnerCardResponse;

@interface IESLiveInnerFeedLiveGuideCardItemModel : IESLiveInnerFeedBaseItemModel

@property (retain, nonatomic) FeedInnerCardResponse *cardResponse;
@property (copy, nonatomic) NSString *guideCardId;

- (void).cxx_destruct;
- (id)feedType;
- (Class)cellClass;
- (Class)sectionClass;

@end
