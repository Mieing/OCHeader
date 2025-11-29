@class NSString;

@interface OMJRecommendOptions : NSObject

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, copy, nonatomic) NSString *scene;
@property (nonatomic) unsigned int eventType;

- (id)initWithMode:(unsigned long long)a0 scene:(id)a1;
- (id)initWithMode:(unsigned long long)a0 scene:(id)a1 eventType:(unsigned int)a2;
- (id)description;
- (void).cxx_destruct;

@end
