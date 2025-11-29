@class NSString;

@interface HTSLiveNewHighlightTempInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *itemCover;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *itemContent;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
