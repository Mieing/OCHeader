@class NSString, NSNumber;

@interface AWEIMEnterpriseModeDataBannerStatisticItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long key;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) long long tag;
@property (copy, nonatomic) NSString *bubbleNotice;
@property (copy, nonatomic) NSString *bubbleNoticeJumpSchema;
@property (retain, nonatomic) NSNumber *bubbleNoticeIntervalDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)bubbleNoticeIconName;
- (void).cxx_destruct;
- (id)tagConfig;

@end
