@class NSMutableArray, BaseResponse;

@interface GetBoundHardDevicesResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *deviceList;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

- (void)setContinueFlag:(unsigned int)a0;
- (unsigned int)continueFlag;
- (void)setVersion:(unsigned int)a0;
- (unsigned int)version;
- (void)setDeviceList:(id)a0;
- (id)deviceList;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
