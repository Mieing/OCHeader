@class NSString;
@protocol RTVXRRoomSessionControllerInterface, RTVNarrowAnchorContextProviderProtocol, RxInjector;

@interface RTVNarrowAnchorViewModel : NSObject <RTVXRControllerInterface>

@property (readonly, nonatomic) id<RTVNarrowAnchorContextProviderProtocol> contextProvider;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) long long anchorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)handleClickEvent;
- (void)updateWithAnchorType:(long long)a0 roomController:(id)a1;
- (id)icon;
- (void).cxx_destruct;
- (id)title;

@end
