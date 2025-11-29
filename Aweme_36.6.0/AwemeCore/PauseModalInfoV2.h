@class PauseSearchStructV2, NSMutableArray;

@interface PauseModalInfoV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *relatedKeyPhrasesArray;
@property (readonly, nonatomic) unsigned long long relatedKeyPhrasesArray_Count;
@property (retain, nonatomic) PauseSearchStructV2 *pauseSearchInfo;
@property (nonatomic) BOOL hasPauseSearchInfo;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;

+ (id)descriptor;

- (int)status;
- (id)pauseSearchInfo;

@end
