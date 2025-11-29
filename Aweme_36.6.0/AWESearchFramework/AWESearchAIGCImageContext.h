@class UIImage, NSArray, NSString;

@interface AWESearchAIGCImageContext : NSObject

@property (readonly, nonatomic) BOOL isQuestionType;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *boxArray;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *preSearchId;
@property (nonatomic) BOOL isLatest;

- (void)updateWithBubbleModel:(id)a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;

@end
