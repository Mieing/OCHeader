@class NSString, NSMutableArray, HTSLiveTouchButton;

@interface HTSLiveTreasureTaskGuide : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *mainTextArray;
@property (readonly, nonatomic) unsigned long long mainTextArray_Count;
@property (retain, nonatomic) NSMutableArray *deputyTextArray;
@property (readonly, nonatomic) unsigned long long deputyTextArray_Count;
@property (retain, nonatomic) HTSLiveTouchButton *bar;
@property (nonatomic) BOOL hasBar;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
