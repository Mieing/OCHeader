@class NSString;

@interface IESLiveDanmakuDataSettingFilter : NSObject <IESEZDanmakuDispatcherFilterProtocol>

@property (copy, nonatomic) id /* block */ filterDanmakuData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)filterWithDanmaku:(id)a0;
- (void).cxx_destruct;

@end
