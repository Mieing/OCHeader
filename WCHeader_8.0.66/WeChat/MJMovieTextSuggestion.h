@class NSString;

@interface MJMovieTextSuggestion : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *viewerNumber;

+ (id)suggestionWithRecommendTitleInfo:(id)a0;
+ (id)suggestionsWithRecommendTitleInfos:(id)a0;

- (id)initWithRecommendTitleInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
