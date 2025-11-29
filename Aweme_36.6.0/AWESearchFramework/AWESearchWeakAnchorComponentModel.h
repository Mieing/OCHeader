@class NSString, NSDictionary, AWEAnchorTrackModel, AWEURLModel;

@interface AWESearchWeakAnchorComponentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleTag;
@property (retain, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) AWEURLModel *darkIcon;
@property (copy, nonatomic) NSString *openURL;
@property (retain, nonatomic) AWEAnchorTrackModel *trackModel;
@property (copy, nonatomic) NSDictionary *trackLoaclDict;

+ (BOOL)hitWeakAnchorSettingsWithModel:(id)a0;
+ (BOOL)hitAnchorExpWithModel:(id)a0;
+ (BOOL)hitPOIAnchorExpWithModel:(id)a0;
+ (BOOL)hitNormalStylePOIAnchorExpWithModel:(id)a0;
+ (BOOL)hitOtherAnchorExpWithModel:(id)a0;

- (void)transformWithTransformModel:(id)a0;
- (void).cxx_destruct;

@end
