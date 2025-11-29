@class NSString, NSDictionary, UIView;
@protocol BDXKitViewProtocol;

@interface AWESearchNovelWebDataExtractTask : NSObject

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) long long selectorSeqNo;
@property (nonatomic) long long taskType;
@property (retain, nonatomic) NSDictionary *taskExtraResult;
@property (nonatomic) BOOL isFinish;
@property (nonatomic) long long receiveResultCallbackTime;
@property (nonatomic) long long notifyFinishCallbackTime;
@property (nonatomic) long long finishCode;
@property (retain, nonatomic) UIView<BDXKitViewProtocol> *webView;

- (void).cxx_destruct;

@end
