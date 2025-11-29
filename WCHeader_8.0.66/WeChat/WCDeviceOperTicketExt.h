@class NSString, WCDevice, JSEvent;

@interface WCDeviceOperTicketExt : MMObject

@property (retain, nonatomic) WCDevice *device;
@property (nonatomic) unsigned int operType;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) JSEvent *callBackEvent;

- (void).cxx_destruct;

@end
