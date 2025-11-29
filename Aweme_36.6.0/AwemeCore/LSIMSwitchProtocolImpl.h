@class NSString;

@interface LSIMSwitchProtocolImpl : DUXSwitch <LSIMSwitchProtocol>

@property (readonly, nonatomic) BOOL isOn;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) id /* block */ valueChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
