@class NSString;
@protocol IESLiveMonitor;

@interface IESLiveGiftAPIImpl : HTSLiveApi <IESLiveGiftAPI>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) BOOL enableTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
