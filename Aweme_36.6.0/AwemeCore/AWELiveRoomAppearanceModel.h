@class NSArray, NSString, AWEURLModel;

@interface AWELiveRoomAppearanceModel : AWEBaseApiModel

@property (nonatomic) long long upRightStatsDisplayType;
@property (nonatomic) long long previewStyle;
@property (retain, nonatomic) NSArray *contentTagsArray;
@property (retain, nonatomic) NSString *tagsForTrack;
@property (retain, nonatomic) AWEURLModel *blurPlaceHolderImg;

+ (id)parseFromOriginRoomModel:(id)a0;

- (void).cxx_destruct;

@end
