@class NSString, NSDictionary;

@interface AWEHPBadgeTrackShowModel : AWEHPBadgeTrackBaseModel

@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) unsigned long long dotType;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *bizID;
@property (copy, nonatomic) NSString *dotText;
@property (nonatomic) long long dotNumber;
@property (nonatomic) long long downgradedType;
@property (copy, nonatomic) NSDictionary *badgeJumpTrackParams;
@property (nonatomic) unsigned long long reduceReason;
@property (retain, nonatomic) NSDictionary *interceptedParams;
@property (copy, nonatomic) NSDictionary *bizTrackParams;

- (void).cxx_destruct;

@end
