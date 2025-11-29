@class NSDictionary, NSArray;

@interface IESLiveDynamicToastHandleManager : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dynamicToastCache;
@property (readonly, copy, nonatomic) NSArray *dynamicToastFiles;
@property (readonly, copy, nonatomic) NSArray *dynamicToastLines;
@property (nonatomic) BOOL enableDynamicToast;

+ (id)sharedInstance;

- (id)getDynamicToastWithFileName:(const char *)a0 andLine:(int)a1;
- (void).cxx_destruct;
- (id)init;

@end
