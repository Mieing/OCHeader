@interface PatDisplayConfiguration : NSObject

@property (nonatomic) BOOL showLink;
@property (nonatomic) BOOL showTextStateIcon;
@property (nonatomic) BOOL showHighlightPat;
@property (nonatomic) BOOL enableChangeSuffixRemind;

+ (id)chatConfiguration;
+ (id)pureTextConfiguration;
+ (id)attributedHighlightConfiguration;

@end
