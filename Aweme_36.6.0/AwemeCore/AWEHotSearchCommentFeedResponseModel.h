@class AWEHotSearchCommentAdditionalInfo, NSArray, NSString, NSNumber, AWEHotSearchCommentBackgroundConfig;

@interface AWEHotSearchCommentFeedResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *commentCardList;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *bottomPlaceHolder;
@property (retain, nonatomic) AWEHotSearchCommentAdditionalInfo *additionalInfo;
@property (retain, nonatomic) AWEHotSearchCommentBackgroundConfig *backgroundConfig;

+ (id)commentCardListJSONTransformer;
+ (id)additionalInfoJSONTransformer;
+ (id)backgroundConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
