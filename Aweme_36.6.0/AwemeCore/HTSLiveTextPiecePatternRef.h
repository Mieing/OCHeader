@class NSString;

@interface HTSLiveTextPiecePatternRef : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *defaultPattern;

+ (id)descriptor;

@end
