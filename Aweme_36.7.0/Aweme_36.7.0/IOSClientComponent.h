@class NSMutableArray;

@interface IOSClientComponent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *fragmentsArray;
@property (readonly, nonatomic) unsigned long long fragmentsArray_Count;
@property (retain, nonatomic) NSMutableArray *landscapeLayoutArray;
@property (readonly, nonatomic) unsigned long long landscapeLayoutArray_Count;
@property (retain, nonatomic) NSMutableArray *portraitLayoutArray;
@property (readonly, nonatomic) unsigned long long portraitLayoutArray_Count;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) long long templateId;
@property (retain, nonatomic) NSMutableArray *elementsArray;
@property (readonly, nonatomic) unsigned long long elementsArray_Count;

+ (id)descriptor;

- (id)elementsArray;
- (id)fragmentsArray;
- (long long)templateId;
- (BOOL)isOpen;

@end
