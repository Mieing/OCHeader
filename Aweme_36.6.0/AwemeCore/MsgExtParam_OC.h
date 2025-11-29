@class NSString;

@interface MsgExtParam_OC : NSObject

@property (nonatomic) long long eHttpType;
@property (nonatomic) long long uiReqId;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorMsg;

- (void).cxx_destruct;

@end
