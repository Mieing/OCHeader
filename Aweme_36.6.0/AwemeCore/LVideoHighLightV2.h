@class NSString;

@interface LVideoHighLightV2 : GPBMessage

@property (copy, nonatomic) NSString *highlightEpisodeId;
@property (nonatomic) BOOL hasHighlightEpisodeId;
@property (nonatomic) long long startTimeMsec;
@property (nonatomic) BOOL hasStartTimeMsec;
@property (nonatomic) long long endTimeMsec;
@property (nonatomic) BOOL hasEndTimeMsec;
@property (copy, nonatomic) NSString *highlightItemId;
@property (nonatomic) BOOL hasHighlightItemId;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) BOOL hasAuthToken;
@property (copy, nonatomic) NSString *highlightTitle;
@property (nonatomic) BOOL hasHighlightTitle;

+ (id)descriptor;

@end
