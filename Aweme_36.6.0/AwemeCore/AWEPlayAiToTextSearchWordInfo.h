@class AWETextExtra;

@interface AWEPlayAiToTextSearchWordInfo : NSObject

@property (retain, nonatomic) AWETextExtra *textExtra;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (id)attachmentInfo:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void).cxx_destruct;

@end
