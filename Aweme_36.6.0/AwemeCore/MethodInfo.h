@class NSString, NSMutableArray;

@interface MethodInfo : GPBMessage

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL hasScene;
@property (copy, nonatomic) NSString *description_p;
@property (nonatomic) BOOL hasDescription_p;
@property (copy, nonatomic) NSString *pluginName;
@property (nonatomic) BOOL hasPluginName;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (copy, nonatomic) NSString *params;
@property (nonatomic) BOOL hasParams;
@property (retain, nonatomic) NSMutableArray *backtraceArray;
@property (readonly, nonatomic) unsigned long long backtraceArray_Count;

+ (id)descriptor;

@end
