@class IESLiveBackendBizResp, NSError, HTSLivePBResponse_Header;

@interface IESLiveBackendRequestResult : NSObject

@property (retain, nonatomic) IESLiveBackendBizResp *originBizResp;
@property (retain, nonatomic) id parsedData;
@property (retain, nonatomic) HTSLivePBResponse_Header *responseHeader;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double nativeTimeInterval;
@property (nonatomic) double serverTimeInterval;

- (void).cxx_destruct;

@end
