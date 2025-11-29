@class NSString, NSDictionary, UIImage, AWEShareWebMetadataModel;

@interface AWEShareWebModel : NSObject

@property (copy, nonatomic) NSDictionary *poiGoodsPanelExtraData;
@property (copy, nonatomic) NSDictionary *poiGoodsPanelExtraData;
@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) UIImage *shareImage;
@property (retain, nonatomic) AWEShareWebMetadataModel *metadata;
@property (nonatomic) BOOL showsIMForQRCode;
@property (nonatomic) BOOL shouldTrackH5Share;
@property (retain, nonatomic) NSString *activityName;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
