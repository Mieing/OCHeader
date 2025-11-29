@class NSString, UIFont, AWEInsetsLabel;

@interface AWECommentModuleConfig : NSObject

@property (class, readonly, nonatomic) BOOL isColorWhite;
@property (class, readonly, nonatomic) double contentVerticalPadding;
@property (class, readonly, nonatomic) UIFont *likedByCreatorTextFont;
@property (class, readonly, nonatomic) double authorTagLabelSpace;
@property (class, readonly, nonatomic) double likedByCreatorLabelHeight;
@property (class, readonly, copy, nonatomic) NSString *CommentLikeBeforeName;
@property (class, readonly, nonatomic) AWEInsetsLabel *authorTagLabel;
@property (class, readonly, nonatomic) AWEInsetsLabel *reposterTagLabel;
@property (class, readonly, nonatomic) AWEInsetsLabel *followerTagLabel;
@property (class, readonly, nonatomic) AWEInsetsLabel *customTagLabel;
@property (class, readonly, nonatomic) AWEInsetsLabel *relationTagLabel;
@property (class, readonly, nonatomic) AWEInsetsLabel *songTagLabel;

+ (BOOL)isColorWhite;
+ (double)contentVerticalPadding;
+ (id)followerTagLabel;
+ (id)authorTagLabel;
+ (double)authorTagLabelSpace;
+ (id)relationTagLabel;
+ (id)likedByCreatorTextFont;
+ (double)likedByCreatorLabelHeight;
+ (id)customTagLabel;
+ (BOOL)test;

@end
