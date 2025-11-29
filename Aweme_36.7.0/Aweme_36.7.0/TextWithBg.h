@class NSString, NSMutableArray;

@interface TextWithBg : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *textArray;
@property (readonly, nonatomic) unsigned long long textArray_Count;
@property (copy, nonatomic) NSString *cssCode;

+ (id)descriptor;

@end
