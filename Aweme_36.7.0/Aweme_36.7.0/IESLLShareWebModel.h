@class NSDictionary, NSString;

@interface IESLLShareWebModel : NSObject

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *qrcodeShareInfo;
@property (copy, nonatomic) NSDictionary *poiGoodsPanelExtraData;
@property (copy, nonatomic) NSDictionary *imExtra;
@property (nonatomic) BOOL showsIMForQRCode;
@property (nonatomic) BOOL shouldTrackH5Share;
@property (nonatomic) long long aweType;

- (void).cxx_destruct;

@end
