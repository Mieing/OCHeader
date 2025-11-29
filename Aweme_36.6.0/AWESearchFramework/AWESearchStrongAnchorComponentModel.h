@class NSString, NSDictionary, AWEAnchorPoiUIInfo, AWEAnchorIconTagInfo, AWEAnchorTrackModel, AWEURLModel;

@interface AWESearchStrongAnchorComponentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *anchorCardName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleTag;
@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) AWEAnchorIconTagInfo *iconTagInfo;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSDictionary *trackLoaclDict;
@property (retain, nonatomic) AWEAnchorPoiUIInfo *anchorPoiUIInfo;
@property (retain, nonatomic) AWEAnchorTrackModel *trackModel;

- (void)transformWithTransformModel:(id)a0;
- (void).cxx_destruct;

@end
