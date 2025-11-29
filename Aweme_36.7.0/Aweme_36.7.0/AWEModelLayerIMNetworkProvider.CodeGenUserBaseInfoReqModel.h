@class NSNumber, NSString;

@interface AWEModelLayerIMNetworkProvider.CodeGenUserBaseInfoReqModel : NSObject

@property (nonatomic, retain) NSNumber *uid;
@property (nonatomic, retain) NSString *devicePlatform;
@property (nonatomic, retain) NSNumber *versionCode;
@property (nonatomic, retain) NSNumber *did;
@property (nonatomic, retain) NSNumber *appId;
@property (nonatomic, retain) NSNumber *installId;

- (id)toJSONString;
- (id)initWithUid:(id)a0 devicePlatform:(id)a1 versionCode:(id)a2 did:(id)a3 appId:(id)a4 installId:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
