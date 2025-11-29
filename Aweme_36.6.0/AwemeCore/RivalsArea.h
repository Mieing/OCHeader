@class NSString, NSMutableArray;

@interface RivalsArea : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *rivalsArray;
@property (readonly, nonatomic) unsigned long long rivalsArray_Count;
@property (copy, nonatomic) NSString *imprId;

+ (id)descriptor;

@end
