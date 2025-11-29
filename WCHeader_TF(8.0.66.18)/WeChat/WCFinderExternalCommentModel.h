@class NSString;

@interface WCFinderExternalCommentModel : NSObject

@property (copy, nonatomic) NSString *postContent;
@property (nonatomic) int sourceScene;

- (id)initWithPostContent:(id)a0 sourceScene:(int)a1;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
