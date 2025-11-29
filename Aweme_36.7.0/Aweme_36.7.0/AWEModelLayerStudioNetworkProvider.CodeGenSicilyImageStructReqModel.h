@class NSString, NSNumber;

@interface AWEModelLayerStudioNetworkProvider.CodeGenSicilyImageStructReqModel : NSObject

@property (nonatomic, retain) NSString *uri;
@property (nonatomic, retain) NSString *latitude;
@property (nonatomic, retain) NSString *insertShootPositionId;
@property (nonatomic, retain) NSString *longitude;
@property (nonatomic, retain) NSNumber *height;
@property (nonatomic, retain) NSNumber *width;

- (id)toJSONString;
- (id)initWithUri:(id)a0 latitude:(id)a1 insertShootPositionId:(id)a2 longitude:(id)a3 height:(id)a4 width:(id)a5;
- (void).cxx_destruct;
- (id)init;

@end
