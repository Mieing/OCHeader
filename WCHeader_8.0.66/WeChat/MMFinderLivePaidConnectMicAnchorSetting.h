@class NSString, NSDictionary;

@interface MMFinderLivePaidConnectMicAnchorSetting : NSObject <NSCopying>

@property (nonatomic) unsigned int bidGap;
@property (nonatomic) unsigned long long settingSeq;
@property (nonatomic) unsigned long long connectDuration;
@property (nonatomic) unsigned long long disconnectMethod;
@property (nonatomic) unsigned long long connectPrice;
@property (nonatomic) BOOL bidEnabled;
@property (nonatomic) unsigned long long bidPrice;
@property (nonatomic) BOOL focusModeOn;
@property (retain, nonatomic) NSString *focusUserId;
@property (retain, nonatomic) NSDictionary *focusUserIndices;

+ (id)fromPurchaseMicSetting:(id)a0;

- (id)toPurchaseMicSetting;
- (id)init;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)settingDescription;
- (void).cxx_destruct;

@end
