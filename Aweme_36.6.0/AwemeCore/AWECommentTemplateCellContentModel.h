@class NSString, NSArray;

@interface AWECommentTemplateCellContentModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textTag;
@property (nonatomic) long long maxLine;
@property (copy, nonatomic) NSArray *textExtras;
@property (copy, nonatomic) NSArray *medias;
@property (nonatomic) BOOL multiRowsDisplay;
@property (copy, nonatomic) NSString *extraTitle;
@property (nonatomic) BOOL expanded;

- (void).cxx_destruct;
- (id)init;

@end
