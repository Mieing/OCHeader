@class NSString;
@protocol NSCopying;

@interface LynxFluencyConfig : NSObject

@property (retain, nonatomic) id<NSCopying> key;
@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSString *scrollMonitorTagName;
@property (nonatomic) int instanceId;

- (id)initWithKey:(id)a0 tagName:(id)a1 scrollMonitorTagName:(id)a2 instanceId:(int)a3;
- (void).cxx_destruct;

@end
