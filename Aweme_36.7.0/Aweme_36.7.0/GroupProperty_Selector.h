@class NSString, NSMutableArray;

@interface GroupProperty_Selector : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *categoryKeyListArray;
@property (readonly, nonatomic) unsigned long long categoryKeyListArray_Count;
@property (copy, nonatomic) NSString *defaultKey;

+ (id)descriptor;

@end
