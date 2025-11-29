@class NSMutableArray, NSMutableDictionary;

@interface ChatBackgroundSettings : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableDictionary *backgroundPreferences;
@property (nonatomic) long long currentCID;
@property (nonatomic) long long lastSyncListDate;

- (id)initWithDefault;
- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;
- (id)getChatBackgroundItemByCID:(long long)a0;
- (void)setBackgroundPreference:(id)a0 forUsername:(id)a1;
- (id)getBackgroundPreferenceForUsername:(id)a0;
- (id)getDefaultBackgroundItem;
- (unsigned long long)countOfItems;
- (id)keyPaths;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
