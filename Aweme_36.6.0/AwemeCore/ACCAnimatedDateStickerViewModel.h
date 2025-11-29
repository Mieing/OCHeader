@class AWEVideoPublishViewModel;

@interface ACCAnimatedDateStickerViewModel : NSObject

@property (nonatomic) BOOL triedFetchingBefore;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;

- (id)fetchEffectWithEffectID:(id)a0;
- (id)usedDate;
- (long long)dateFormattingStyle;
- (void).cxx_destruct;

@end
