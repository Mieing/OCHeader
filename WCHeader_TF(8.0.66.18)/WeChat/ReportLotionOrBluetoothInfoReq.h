@class BaseRequest, NSData, NSString;

@interface ReportLotionOrBluetoothInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) float rssi;
@property (retain, nonatomic) NSData *customManuFacturerData;
@property (retain, nonatomic) NSString *cardId;
@property (nonatomic) BOOL hasTurnedOnBluetooth;
@property (nonatomic) BOOL authorizeLocation;

+ (void)initialize;

@end
