@class NSString;

@interface MJMovieTextSuggestionViewCellItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *viewerNumber;
@property (readonly, nonatomic) double titleLabelWidth;
@property (readonly, nonatomic) double viewerNumberLabelWidth;

+ (id)itemWithSuggestion:(id)a0;
+ (id)itemsWithSuggestions:(id)a0;

- (id)initWithSuggestion:(id)a0;
- (void).cxx_destruct;

@end
