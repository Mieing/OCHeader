@class NSString, NSArray, NSDate, NSMutableArray, MMEasterEggTopAnimation;
@protocol MMEasterEggActivityInfo;

@interface MMEasterEgg : NSObject

@property (retain, nonatomic) NSString *m_nsEmoji;
@property (retain, nonatomic) NSDate *m_oBeginDate;
@property (retain, nonatomic) NSDate *m_oEndDate;
@property (nonatomic) unsigned int m_uiReport;
@property (retain, nonatomic) NSMutableArray *m_arrKeyWords;
@property (retain, nonatomic) NSArray *m_arrSupportLanguages;
@property (nonatomic) long long type;
@property (nonatomic) long long effectType;
@property (retain, nonatomic) NSString *magicEmojiEffectId;
@property (retain, nonatomic) NSArray *eggAnimations;
@property (retain, nonatomic) MMEasterEggTopAnimation *eggTopAnimation;
@property (retain, nonatomic) id<MMEasterEggActivityInfo> activityInfo;
@property (readonly, nonatomic) BOOL supportInteractiveEgg;

- (BOOL)isEffective;
- (BOOL)checkAsciiMatch:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)matchKeyWord:(id)a0 matchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 keywordToLocationDict:(id)a2;
- (void).cxx_destruct;

@end
