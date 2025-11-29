@class NSString;

@interface MMFlutterViewStackData : NSObject

@property (retain, nonatomic) NSString *engineId;
@property (nonatomic) unsigned long long viewState;

- (id)initWithEngineId:(id)a0 viewState:(unsigned long long)a1;
- (BOOL)isVisible;
- (void).cxx_destruct;

@end
