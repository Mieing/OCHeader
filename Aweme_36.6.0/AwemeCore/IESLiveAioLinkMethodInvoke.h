@class IESLiveAioLinkMethodModel, NSError, NSString;

@interface IESLiveAioLinkMethodInvoke : NSObject

@property (retain, nonatomic) IESLiveAioLinkMethodModel *method;
@property (retain, nonatomic) id disposable;
@property (retain, nonatomic) id block;
@property (retain, nonatomic) id params;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double createTime;
@property (nonatomic) double autoBindTime;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL needReport;
@property (nonatomic) BOOL isLynxError;
@property (nonatomic) BOOL useInt64ToString;
@property (nonatomic) BOOL lynxToLynx;
@property (copy, nonatomic) id /* block */ nativeInvokeCompletion;
@property (copy, nonatomic) id /* block */ callAioBlock;

- (void)invoke:(id)a0;
- (void)invokeReturnValue:(id)a0 error:(id)a1;
- (id)initWithMethod:(id)a0 tag:(id)a1 lynxToLynx:(BOOL)a2;
- (id)initWithMethod:(id)a0 tag:(id)a1;
- (void)sendReturnValue:(id)a0 isStream:(BOOL)a1 returnContentType:(long long)a2;
- (void)invoke:(id)a0 withParams:(id)a1 returnContentType:(long long)a2;
- (void)sendReturnValue:(id)a0 isStream:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
