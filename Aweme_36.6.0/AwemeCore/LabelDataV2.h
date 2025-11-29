@class LabelCommentStructV2, NSString, TabGuideLabelInfoV2, NSMutableArray;

@interface LabelDataV2 : GPBMessage

@property (retain, nonatomic) LabelCommentStructV2 *relatedComment;
@property (nonatomic) BOOL hasRelatedComment;
@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (retain, nonatomic) NSMutableArray *commentListArray;
@property (readonly, nonatomic) unsigned long long commentListArray_Count;
@property (copy, nonatomic) NSString *recommendReason;
@property (nonatomic) BOOL hasRecommendReason;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (retain, nonatomic) TabGuideLabelInfoV2 *tabGuideInfo;
@property (nonatomic) BOOL hasTabGuideInfo;

+ (id)descriptor;

@end
