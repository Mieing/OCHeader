@class NSString, NSArray;

@interface TSPKAspectModel : NSObject

@property (readonly, nonatomic) unsigned long long returnTypeKind;
@property (readonly, nonatomic) unsigned long long aspectPosition;
@property (retain, nonatomic) NSString *klassName;
@property (retain, nonatomic) NSString *methodName;
@property (retain, nonatomic) NSString *returnType;
@property (retain, nonatomic) NSString *returnValue;
@property (retain, nonatomic) NSString *pipelineType;
@property (retain, nonatomic) NSString *dataType;
@property (retain, nonatomic) NSString *registerEntryType;
@property (nonatomic) long long apiId;
@property (nonatomic) unsigned long long methodType;
@property (nonatomic) BOOL needLogCaller;
@property (nonatomic) BOOL needFuse;
@property (nonatomic) long long storeType;
@property (nonatomic) long long apiUsageType;
@property (retain, nonatomic) NSString *detector;
@property (nonatomic) BOOL enableDetector;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL aspectAllMethods;
@property (nonatomic) BOOL ignoreInternalMethods;

- (void)fillPipelineType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
