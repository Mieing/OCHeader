@class NSString;

@interface WAJSCanvasReportExceptionItem : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *stack;
@property (copy, nonatomic) NSString *basePkgVer;
@property (nonatomic) unsigned int jsVMType;
@property (nonatomic) BOOL isMainContext;
@property (copy, nonatomic) NSString *jsContextName;

- (id)reportString;
- (void).cxx_destruct;

@end
