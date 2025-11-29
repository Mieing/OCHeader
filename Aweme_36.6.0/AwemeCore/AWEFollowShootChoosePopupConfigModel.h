@class NSArray, NSString, AWEFollowShootChoosePopupTrackModel;

@interface AWEFollowShootChoosePopupConfigModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSArray *itemArray;
@property (copy, nonatomic) NSString *cancelText;
@property (retain, nonatomic) AWEFollowShootChoosePopupTrackModel *showTrack;
@property (retain, nonatomic) AWEFollowShootChoosePopupTrackModel *cancelTrack;

+ (id)itemArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
