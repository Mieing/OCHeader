@class NSString;

@interface LifePoiCommentTopBarStructV2 : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *tipsWord;
@property (nonatomic) BOOL hasTipsWord;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (copy, nonatomic) NSString *trackInfo;
@property (nonatomic) BOOL hasTrackInfo;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) BOOL priorityHighSuggestWord;
@property (nonatomic) BOOL hasPriorityHighSuggestWord;

+ (id)descriptor;

@end
