@class NSString, NSMutableArray;

@interface LiveGuideInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *playCaseArray;
@property (readonly, nonatomic) unsigned long long playCaseArray_Count;
@property (copy, nonatomic) NSString *playRule;
@property (copy, nonatomic) NSString *playDoc;

+ (id)descriptor;

@end
