@class NSString, NSArray, NSData, TTHttpTask, BDXBridgeImOpenSSEMethodParamModel;

@interface AWEIMJSBSSERequest : NSObject

@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) BDXBridgeImOpenSSEMethodParamModel *paramModel;
@property (copy, nonatomic) NSArray *dataList;
@property (retain, nonatomic) TTHttpTask *task;
@property (retain, nonatomic) NSData *lastData;
@property (copy, nonatomic) NSString *lastDataStr;

- (void).cxx_destruct;

@end
