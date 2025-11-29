@class NSString, AWESearchRelatedWordModel, AWEGuideSearchWordModel;

@interface AWEEcomSearchPromotionWordModel : NSObject

@property (retain, nonatomic) AWEGuideSearchWordModel *guideSearchWordModel;
@property (retain, nonatomic) AWESearchRelatedWordModel *relatedSearchWordModel;
@property (nonatomic) long long searchWordType;
@property (nonatomic) long long wordIndex;
@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *wordsContent;
@property (copy, nonatomic) NSString *searchKeyWord;
@property (copy, nonatomic) NSString *searchResultId;
@property (nonatomic) BOOL shouldReplaceKeyWord;

- (void).cxx_destruct;

@end
