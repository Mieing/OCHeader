@class NSString;

@interface WeChat.WSReportItem25118OC : NSObject {
    void /* unknown type, empty encoding */ reportItem;
}

@property (class, nonatomic, readonly) long long ActionPull;
@property (class, nonatomic, readonly) long long ActionExpose;
@property (class, nonatomic, readonly) long long ActionClick;
@property (class, nonatomic, readonly) long long ActionAllSearch;
@property (class, nonatomic, readonly) long long ActionToTeachPage;
@property (class, nonatomic, readonly) long long ActionLiteApp;
@property (class, nonatomic, readonly) long long ActionToAISearch;
@property (class, nonatomic, readonly) long long ActionClickDelete;
@property (class, nonatomic, readonly) long long ActionClickEdit;
@property (class, nonatomic, readonly) long long ActionClickEditFinish;
@property (class, nonatomic, readonly) long long ActionClickShowDialog;

@property (nonatomic, copy) NSString *extInfo;

- (id)initWithSessionId:(id)a0 requestId:(id)a1 actionId:(long long)a2 itemInfo:(id)a3 docInfo:(id)a4 scene:(unsigned long long)a5 businessType:(long long)a6;
- (void)report;
- (id)init;
- (void).cxx_destruct;

@end
