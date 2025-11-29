@class NSMutableArray;

@interface CGPBusinessAppFrameworkPod : GPBMessage

@property (nonatomic) int result;
@property (retain, nonatomic) NSMutableArray *appListArray;
@property (readonly, nonatomic) unsigned long long appListArray_Count;

+ (id)descriptor;

@end
