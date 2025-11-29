@class NSString, NSMutableArray;

@interface PauseSearchStructV2 : GPBMessage

@property (copy, nonatomic) NSString *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) NSMutableArray *keyWordsArray;
@property (readonly, nonatomic) unsigned long long keyWordsArray_Count;
@property (nonatomic) int showAisearchEntrance;
@property (nonatomic) BOOL hasShowAisearchEntrance;
@property (copy, nonatomic) NSString *mediaType;
@property (nonatomic) BOOL hasMediaType;

+ (id)descriptor;

- (id)mediaType;
- (int)showAisearchEntrance;
- (id)keyWordsArray;
- (id)icon;

@end
