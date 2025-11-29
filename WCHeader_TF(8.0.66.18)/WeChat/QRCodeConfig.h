@class NSString;

@interface QRCodeConfig : NSObject <PBCoding>

@property (retain, nonatomic) NSString *revokeQrcodeLastId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_revokeQrcodeLastId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
