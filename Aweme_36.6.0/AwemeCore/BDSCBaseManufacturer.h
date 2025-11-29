@class NSString, BDSCManufacturerInfo;

@interface BDSCBaseManufacturer : NSObject <BDSCManufacturerProtocol>

@property (retain, nonatomic) BDSCManufacturerInfo *manufacturerInfo;
@property (retain, nonatomic) BDSCManufacturerInfo *connectedManufacturerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manufacturerWithManufacturerInfo:(id)a0 connectedManufacturerInfo:(id)a1;

- (id)initWithManufacturerInfo:(id)a0 connectedManufacturerInfo:(id)a1;
- (id)substringOfSourceString:(id)a0 startString:(id)a1 endString:(id)a2;
- (id)getPlayManufacturerCommand;
- (BOOL)isSupportToJumpXsg;
- (id)mediaUrlStringWithPlayItem:(id)a0 context:(id)a1;
- (id)manufacturerDescWithPlayItem:(id)a0;
- (void)processByteCastPlayerItem:(id)a0 withUrl:(id)a1;
- (void).cxx_destruct;

@end
