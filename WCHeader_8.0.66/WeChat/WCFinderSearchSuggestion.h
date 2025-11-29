@class NSString, NSMutableArray;

@interface WCFinderSearchSuggestion : NSObject

@property (retain, nonatomic) NSMutableArray *tipsHighLightkeywords;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSString *highLightTips;
@property (nonatomic) unsigned long long dataType;

- (id)initWithTips:(id)a0 highLightTips:(id)a1 dataType:(unsigned long long)a2;
- (id)initWithSuggestion:(id)a0;
- (id)initWithHistoryTips:(id)a0;
- (id)initClearTypeSuggestion;
- (void)processHighLightkeywords;
- (void).cxx_destruct;

@end
