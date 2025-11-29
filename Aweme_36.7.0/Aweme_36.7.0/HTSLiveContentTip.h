@class NSString;

@interface HTSLiveContentTip : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) NSString *clickTitle;
@property (copy, nonatomic) NSString *clickContext;

+ (id)descriptor;

@end
