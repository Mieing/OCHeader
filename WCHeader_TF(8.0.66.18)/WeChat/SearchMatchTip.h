@class NSString, NSMutableDictionary;

@interface SearchMatchTip : NSObject {
    NSString *_showResult;
    unsigned int _minLocation;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *matchPhase;
@property (retain, nonatomic) NSString *queryText;
@property (retain, nonatomic) NSString *showPrefix;
@property (retain, nonatomic) NSString *showSuffix;
@property (nonatomic) unsigned long long matchType;
@property (nonatomic) unsigned long long matchSubType;
@property (nonatomic) unsigned long long groupMemberMatchType;
@property (nonatomic) unsigned long long location;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *displayNameFullPY;
@property (nonatomic) BOOL isSilent;
@property (nonatomic) unsigned long long queryMatchType;
@property (nonatomic) unsigned int chatRoomMemberCount;
@property (retain, nonatomic) NSMutableDictionary *dicGroupMemberMatchTip;

+ (void)updateGroupSortContext;
+ (id)GetActiveMatchTipFrom:(id)a0;
+ (id)GetUnActiveMatchTipFrom:(id)a0;
+ (unsigned int)GetContactActiveDays;

- (id)convertMatchTypeStr;
- (BOOL)isValidMatchTypeStr:(id)a0;
- (id)init;
- (unsigned int)convertLogType;
- (unsigned int)convertGroupMemberMatchType;
- (unsigned int)convertLogType:(unsigned int)a0;
- (id)getShowResult;
- (unsigned int)minMatchLocation;
- (id)matchKeywordsForDisplay;
- (long long)compareSearchMatchTipFirstLineAscending:(id)a0;
- (long long)compareSearchMatchTipSecondLineAscending:(id)a0;
- (long long)compareGroupSearchMatchTipAscending:(id)a0;
- (long long)compareGroupSearchMatchTipAscendingUseBasicLogic:(id)a0;
- (long long)comparePhoneSearchMatchTipFirstLineAscending:(id)a0;
- (long long)comparePhoneSearchMatchTipSecondLineAscending:(id)a0;
- (BOOL)isStrongMatch;
- (BOOL)isMultiMemberMatch;
- (void).cxx_destruct;

@end
