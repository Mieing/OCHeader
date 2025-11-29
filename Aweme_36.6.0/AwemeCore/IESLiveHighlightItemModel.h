@class NSString, HTSLiveImage, NSArray;

@interface IESLiveHighlightItemModel : NSObject

@property (nonatomic) long long highlightId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) HTSLiveImage *coverImage;
@property (copy, nonatomic) NSArray *tsURLs;
@property (copy, nonatomic) NSString *m3U8URL;
@property (copy, nonatomic) NSString *hashTag;
@property (copy, nonatomic) NSString *body;
@property (nonatomic) double coverRadio;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;

- (id)initWithHighlightUrl:(id)a0;
- (void).cxx_destruct;

@end
