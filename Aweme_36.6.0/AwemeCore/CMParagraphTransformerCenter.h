@class NSDictionary, NSMutableArray, NSMutableAttributedString;

@interface CMParagraphTransformerCenter : NSObject

@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) NSMutableAttributedString *containerStr;
@property (retain, nonatomic) NSDictionary *paragraphKeyAndTransforms;
@property (retain, nonatomic) NSDictionary *paragraphAttris;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } noAddedLineRange;

- (void)addLineInfo:(id)a0;
- (id)tryTransform;
- (void).cxx_destruct;
- (id)init;

@end
