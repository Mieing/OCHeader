@class NSDateFormatter, NSMutableDictionary, AWETheaterMoreFeedSectionItem, NSDictionary;

@interface AWETheaterMoreFeedSmallCardCellViewModel : NSObject

@property (retain, nonatomic) NSDateFormatter *yearDateFormatter;
@property (retain, nonatomic) NSMutableDictionary *tagsInfoDict;
@property (weak, nonatomic) AWETheaterMoreFeedSectionItem *sectionItem;
@property (nonatomic) BOOL isShowingDislikeMask;
@property (copy, nonatomic) NSDictionary *feedbackInfo;

+ (double)smallCardInfoViewHeight;
+ (id)videoTagInfoLabelFont;

- (id)moreFeedUpdateInfoText;
- (id)buildLongVideoTagsInfoLimitWidth:(double)a0;
- (double)getActualWidthWithStr:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
