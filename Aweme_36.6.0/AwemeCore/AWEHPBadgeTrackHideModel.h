@class NSString, NSDictionary;

@interface AWEHPBadgeTrackHideModel : AWEHPBadgeTrackBaseModel

@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) unsigned long long dotType;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *bizID;
@property (nonatomic) long long hideType;
@property (nonatomic) long long downgradedType;
@property (nonatomic) unsigned long long reduceReason;
@property (nonatomic) BOOL isDowngradedHide;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDictionary *bizTrackParams;

- (void).cxx_destruct;

@end
