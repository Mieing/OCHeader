@class NSString, IESEZDanmakuContext;

@interface IESEZDanmakuPriorityControlComponent : NSObject <IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentType;

- (void)prepareStart;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
