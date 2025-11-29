@class NSString, NSMutableArray;

@interface CGPBusinessPermissionPod : GPBMessage

@property (retain, nonatomic) NSMutableArray *requestPermissionArray;
@property (readonly, nonatomic) unsigned long long requestPermissionArray_Count;
@property (copy, nonatomic) NSString *packageName;

+ (id)descriptor;

@end
