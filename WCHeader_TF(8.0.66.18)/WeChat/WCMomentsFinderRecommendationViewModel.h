@class WCMomentsFinderRecommendationPlaceholderContext, NSString, NSArray, UIFont, NSDate, WCMomentsFinderRecommendationInfo, WCFinderFeedMediaWrap, CContact, UIColor;

@interface WCMomentsFinderRecommendationViewModel : NSObject

@property (copy, nonatomic) NSArray *usernames;
@property (copy, nonatomic) NSArray *usernamesForHeadImages;
@property (copy, nonatomic) NSArray *contactsForHeadImages;
@property (retain, nonatomic) CContact *contactForUserText;
@property (copy, nonatomic) NSString *userText;
@property (copy, nonatomic) NSString *contentTypeRichText;
@property (copy, nonatomic) NSString *contentTypeAccessibilityLabel;
@property (nonatomic) BOOL Report_isFirstEnteringTimeline;
@property (copy, nonatomic) NSString *Report_timelineSessionID;
@property (nonatomic) unsigned long long Report_recommendationSessionIndex;
@property (readonly, nonatomic) WCMomentsFinderRecommendationInfo *recommendationInfo;
@property (readonly, nonatomic) WCMomentsFinderRecommendationPlaceholderContext *placeholderContext;
@property (readonly, copy, nonatomic) NSString *customizedSeparatorTipsText;
@property (readonly, nonatomic) double paddingX;
@property (nonatomic) double maxWidth;
@property (readonly, nonatomic) long long style;
@property (readonly, copy, nonatomic) NSString *finderLogoName;
@property (readonly, nonatomic) UIColor *finderLogoColor;
@property (readonly, nonatomic) NSString *finderLogoColorName;
@property (readonly, nonatomic) UIFont *bannerTextFont;
@property (readonly, nonatomic) BOOL showsSingleBannerText;
@property (readonly, copy, nonatomic) NSString *singleBannerText;
@property (readonly, copy, nonatomic) NSString *seeText;
@property (readonly, nonatomic) NSString *fallbackSeeText;
@property (readonly, nonatomic) unsigned long long userCount;
@property (copy, nonatomic) NSString *userTextThatDisplayed;
@property (nonatomic) BOOL isUserTextTruncated;
@property (readonly, nonatomic) NSString *fallbackUserText;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSString *contentTypePlainText;
@property (readonly, copy, nonatomic) NSString *contentTypeShorterRichText;
@property (readonly, copy, nonatomic) NSString *contentTypeShorterPlainText;
@property (readonly, copy, nonatomic) NSString *contentTypeShorterAccessibilityLabel;
@property (copy, nonatomic) NSString *contentTypePlainTextThatDisplayed;
@property (readonly, nonatomic) WCFinderFeedMediaWrap *cardThumbMediaWrap;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } cardThumbMediaSize;
@property (readonly, copy, nonatomic) NSString *cardDescriptionRichText;
@property (retain, nonatomic) NSDate *timeThatNavigatedToFinder;

+ (id)viewModelWithRecommendationInfo:(id)a0 placeholderContext:(id)a1;

- (void)initParamsForReporter;
- (id)initWithRecommendationInfo:(id)a0 placeholderContext:(id)a1;
- (void)adjustSplicingTexts;
- (void)navigateToFinderPageFromViewController:(id)a0;
- (void).cxx_destruct;

@end
