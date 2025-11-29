@class NSMutableArray;

@interface SuggestWordsV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *suggestWordsArray;
@property (readonly, nonatomic) unsigned long long suggestWordsArray_Count;
@property (nonatomic) int disableDisplayBarInner;
@property (nonatomic) BOOL hasDisableDisplayBarInner;

+ (id)descriptor;

- (id)suggestWordsArray;

@end
