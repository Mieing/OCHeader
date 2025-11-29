@class NSString, NSMutableDictionary;

@interface IESEZDanmakuViewReusePool : NSObject <IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) NSMutableDictionary *reusableViewsMap;
@property (nonatomic) unsigned long long waterLine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentType;

- (void)recycleDanmakuViewFromData:(id)a0;
- (id)dequeueReuseDanmakuViewWithData:(id)a0;
- (void)poolDrain;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
