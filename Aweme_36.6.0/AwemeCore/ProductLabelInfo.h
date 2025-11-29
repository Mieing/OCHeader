@class NSString, NSMutableArray;

@interface ProductLabelInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *rightText;
@property (nonatomic) int fontSize;
@property (copy, nonatomic) NSString *fontColor;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) BOOL dividingLine;
@property (nonatomic) int labelType;
@property (retain, nonatomic) NSMutableArray *leftIconListArray;
@property (readonly, nonatomic) unsigned long long leftIconListArray_Count;

+ (id)descriptor;

- (id)memoryData;
- (id)initWithSnakeDict:(id)a0;
- (id)initWithDict:(id)a0;

@end
