@class NSString, NSDictionary, TPMediaAssetExtraParam;

@interface TPRtcMediaAsset : NSObject <ITPMediaAsset>

@property (copy, nonatomic) NSString *streamUrl;
@property (copy, nonatomic) NSString *serverUrl;
@property (nonatomic) unsigned long long sdpExchangeType;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *httpHeader;
@property (retain, nonatomic) TPMediaAssetExtraParam *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
