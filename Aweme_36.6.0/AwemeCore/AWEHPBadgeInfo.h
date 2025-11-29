@class NSString, AWEHPChannelBadgeCallContext;

@interface AWEHPBadgeInfo : AWEHPBaseComponentInfo <NSCopying>

@property (nonatomic) unsigned long long badgeType;
@property (copy, nonatomic) NSString *badgeText;
@property (nonatomic) long long badgeNumber;
@property (nonatomic) long long downgradedType;
@property (nonatomic) unsigned long long reduceReason;
@property (retain, nonatomic) AWEHPChannelBadgeCallContext *context;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
