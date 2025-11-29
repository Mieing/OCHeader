@class NSString, AWEURLModel;

@interface AWENearbyFeedDualAnchorInfo : AWEBaseApiModel

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEURLModel *anchorIcon;
@property (copy, nonatomic) NSString *anchorIconText;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWEURLModel *groupIcon;
@property (nonatomic) long long isLocalLifeVideo;
@property (nonatomic) long long uiStyle;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *poiId;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
