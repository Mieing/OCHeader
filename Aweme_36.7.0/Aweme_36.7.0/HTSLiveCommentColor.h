@class NSString;

@interface HTSLiveCommentColor : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *color;

+ (id)descriptor;

@end
