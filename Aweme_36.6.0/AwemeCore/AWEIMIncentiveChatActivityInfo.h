@class NSString, AWEIMIncentiveChatIndicatorInfo, AWEIncentiveChatInvitePanelButtonTextModel;

@interface AWEIMIncentiveChatActivityInfo : NSObject

@property (nonatomic) unsigned long long userActivityType;
@property (nonatomic) BOOL hasActivity;
@property (nonatomic) unsigned long long privateActivityStatus;
@property (nonatomic) BOOL hasTopRedpackEntry;
@property (nonatomic) BOOL hasCellEntry;
@property (nonatomic) BOOL hasActionBarEntry;
@property (retain, nonatomic) NSString *actionBarStrategyKey;
@property (retain, nonatomic) AWEIncentiveChatInvitePanelButtonTextModel *invitePanelButtonTextModel;
@property (retain, nonatomic) AWEIMIncentiveChatIndicatorInfo *indicatorInfo;
@property (nonatomic) unsigned long long cellEntryStatus;

+ (unsigned long long)p_getCellEntryStatusWithDictionary:(id)a0;

- (id)dictionaryRawData;
- (id)initWithDictionary:(id)a0 chatType:(unsigned long long)a1 loginUid:(id)a2 isFromStorage:(BOOL)a3;
- (void).cxx_destruct;

@end
