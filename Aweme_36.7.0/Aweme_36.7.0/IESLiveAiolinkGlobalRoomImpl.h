@class NSString, IESLiveCombineSubject;

@interface IESLiveAiolinkGlobalRoomImpl : NSObject <IESLiveAioLinkGlobalRoomService>

@property (retain, nonatomic) IESLiveCombineSubject *roomSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnterRoom:(id)a0;
- (id)observeCoreRoomInfo;
- (void).cxx_destruct;

@end
