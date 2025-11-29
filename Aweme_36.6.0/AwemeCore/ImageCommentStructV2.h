@class NSString;

@interface ImageCommentStructV2 : GPBMessage

@property (copy, nonatomic) NSString *commentId;
@property (nonatomic) BOOL hasCommentId;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) BOOL hasItemId;
@property (copy, nonatomic) NSString *itemDesc;
@property (nonatomic) BOOL hasItemDesc;
@property (copy, nonatomic) NSString *itemUserId;
@property (nonatomic) BOOL hasItemUserId;
@property (copy, nonatomic) NSString *itemUserName;
@property (nonatomic) BOOL hasItemUserName;
@property (nonatomic) int imageCommentVersion;
@property (nonatomic) BOOL hasImageCommentVersion;
@property (nonatomic) int commentType;
@property (nonatomic) BOOL hasCommentType;
@property (copy, nonatomic) NSString *commentHighlightText;
@property (nonatomic) BOOL hasCommentHighlightText;
@property (copy, nonatomic) NSString *commentHighlightSchema;
@property (nonatomic) BOOL hasCommentHighlightSchema;

+ (id)descriptor;

@end
