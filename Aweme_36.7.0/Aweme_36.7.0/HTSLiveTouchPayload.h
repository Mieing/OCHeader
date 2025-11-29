@class NSString, NSMutableArray;

@interface HTSLiveTouchPayload : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (readonly, nonatomic) unsigned long long itemsArray_Count;
@property (copy, nonatomic) NSString *touchExtra;
@property (nonatomic) int eventType;

+ (id)descriptor;

@end
