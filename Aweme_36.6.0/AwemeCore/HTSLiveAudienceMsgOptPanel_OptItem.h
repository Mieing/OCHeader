@class NSMutableArray;

@interface HTSLiveAudienceMsgOptPanel_OptItem : IESLivePBBaseMessage

@property (nonatomic) long long itemId;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSMutableArray *outsideNameArray;
@property (readonly, nonatomic) unsigned long long outsideNameArray_Count;
@property (retain, nonatomic) NSMutableArray *insideNameArray;
@property (readonly, nonatomic) unsigned long long insideNameArray_Count;
@property (nonatomic) BOOL canShow;
@property (nonatomic) BOOL showOutside;

+ (id)descriptor;

@end
