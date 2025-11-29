@class NSString;

@interface AnnieLegacyMethodInfo : NSObject

@property (copy, nonatomic) NSString *methodName;
@property (retain, nonatomic) Class methodClass;
@property (nonatomic) SEL methodSelector;
@property (nonatomic) BOOL isSession;
@property (nonatomic) unsigned long long authType;

+ (id)infoWithData:(struct _AnnieLegacyMethodData { char *x0; void *x1; int x2; unsigned int x3; })a0;

- (void).cxx_destruct;

@end
