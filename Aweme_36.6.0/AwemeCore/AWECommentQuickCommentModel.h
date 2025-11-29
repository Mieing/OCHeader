@class NSArray;

@interface AWECommentQuickCommentModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *constantWords;
@property (retain, nonatomic) NSArray *timedWords;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
