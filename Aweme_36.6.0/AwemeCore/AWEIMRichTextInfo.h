@class NSDictionary;

@interface AWEIMRichTextInfo : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDictionary *info;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)initWithType:(unsigned long long)a0 info:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)toJsonContent;
- (id)initWithDic:(id)a0;
- (void).cxx_destruct;

@end
