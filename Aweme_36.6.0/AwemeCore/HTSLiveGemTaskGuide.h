@class NSString, NSMutableArray, HTSLiveImage;

@interface HTSLiveGemTaskGuide : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *mainTextArray;
@property (readonly, nonatomic) unsigned long long mainTextArray_Count;
@property (retain, nonatomic) NSMutableArray *deputyTextArray;
@property (readonly, nonatomic) unsigned long long deputyTextArray_Count;
@property (retain, nonatomic) HTSLiveImage *rightIcon;
@property (nonatomic) BOOL hasRightIcon;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
