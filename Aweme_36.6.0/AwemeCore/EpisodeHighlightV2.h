@class NSString;

@interface EpisodeHighlightV2 : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) long long startTimeMillis;
@property (nonatomic) BOOL hasStartTimeMillis;
@property (nonatomic) long long endTimeMillis;
@property (nonatomic) BOOL hasEndTimeMillis;
@property (nonatomic) long long highlightEpisodeId;
@property (nonatomic) BOOL hasHighlightEpisodeId;
@property (nonatomic) long long highlightItemId;
@property (nonatomic) BOOL hasHighlightItemId;

+ (id)descriptor;

@end
