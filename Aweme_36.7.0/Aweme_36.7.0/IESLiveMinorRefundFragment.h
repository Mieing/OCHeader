@class NSDictionary, NSString;

@interface IESLiveMinorRefundFragment : IESLiveRoomComponent <IESLiveMinorRefundRouter>

@property (retain, nonatomic) NSDictionary *dictSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (BOOL)shouldShowMinorRefundItem;
- (id)minorRefundSetting;
- (void)addMinorRefundItem;
- (void)trackItem:(id)a0;
- (void).cxx_destruct;

@end
