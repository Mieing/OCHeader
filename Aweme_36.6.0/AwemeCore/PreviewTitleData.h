@class NSString;

@interface PreviewTitleData : IESLivePBBaseMessage

@property (nonatomic) BOOL open;
@property (copy, nonatomic) NSString *title;

+ (id)descriptor;

@end
