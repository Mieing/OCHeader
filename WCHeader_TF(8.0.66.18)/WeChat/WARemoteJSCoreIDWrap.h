@class NSString;

@interface WARemoteJSCoreIDWrap : NSObject

@property (copy, nonatomic) NSString *jscID;
@property (copy, nonatomic) NSString *jscName;
@property (nonatomic) unsigned int jscType;
@property (nonatomic) unsigned int jscIndex;

+ (id)jscIDForType:(unsigned int)a0 jscIndex:(unsigned int)a1;
+ (id)jscNameForType:(unsigned int)a0 jscIndex:(unsigned int)a1;

- (id)initWithType:(unsigned int)a0 jscIndex:(unsigned int)a1;
- (void).cxx_destruct;

@end
