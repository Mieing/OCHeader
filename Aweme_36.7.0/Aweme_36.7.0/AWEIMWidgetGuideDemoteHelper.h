@class NSString;

@interface AWEIMWidgetGuideDemoteHelper : NSObject

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) unsigned long long style;
@property (nonatomic) long long maxCountIn24;
@property (nonatomic) long long maxShowCount;
@property (nonatomic) long long exitDay;

- (id)initWithIMConversationId:(id)a0 style:(unsigned long long)a1;
- (void)markDismissWithoutClick;
- (void)markShow;
- (BOOL)canShowByFrequencyLimit;
- (void)updateCurrentDateToDateArrayWithStorageKey:(id)a0;
- (id)getDateArrayWithStorageKey:(id)a0;
- (void)storeDateArray:(id)a0 storageKey:(id)a1;
- (id)getUidStorageKeyWithKey:(id)a0;
- (void)readConfifWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;

@end
