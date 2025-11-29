@class NSMutableArray, NSMutableDictionary;

@interface AWETeenDescriptionContext : NSObject

@property (nonatomic) BOOL hasSearchText;
@property (nonatomic) BOOL hasHashTagShowTrackPost;
@property (nonatomic) long long hashTagShowTrackPostMark;
@property (retain, nonatomic) NSMutableArray *hashTagArray;
@property (retain, nonatomic) NSMutableDictionary *hashTagShowMark;
@property (nonatomic) double hashTagLength;
@property (nonatomic) BOOL hasTrendingShowTrackPost;
@property (nonatomic) long long trendingWordsShowTrackPostMark;
@property (retain, nonatomic) NSMutableArray *searchWordArray;
@property (retain, nonatomic) NSMutableDictionary *searchWordShowMark;
@property (nonatomic) BOOL forPlayLetVideoDescription;

- (id)descriptionLabelFontWithHeightCaption;
- (id)descriptionLabelFont;
- (void).cxx_destruct;

@end
