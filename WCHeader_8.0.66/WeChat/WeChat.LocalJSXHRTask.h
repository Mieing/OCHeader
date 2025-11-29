@class NSString, NSData, NSDictionary;

@interface WeChat.LocalJSXHRTask : NSObject {
    void /* unknown type, empty encoding */ urlTask;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *apiName;
@property (nonatomic, readonly) NSDictionary *params;

- (id)initWithUrlTask:(id)a0;
- (void)didFinishWithParams:(id)a0 data:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
