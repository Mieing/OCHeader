@class NSString, Content;

@interface ContentArea : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) Content *content;
@property (nonatomic) BOOL hasContent;

+ (id)descriptor;

@end
