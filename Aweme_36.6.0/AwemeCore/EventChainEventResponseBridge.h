@class NSString, NSDictionary;

@interface EventChainEventResponseBridge : NSObject {
    void /* function */ errorMsg;
    void /* function */ bizResultParams;
    void /* function */ modifiedContextParams;
}

@property (nonatomic, readonly) BOOL success;
@property (nonatomic, readonly) NSString *errorMsg;
@property (nonatomic, readonly) BOOL breakNext;
@property (nonatomic, readonly) BOOL ignoreError;
@property (nonatomic, readonly) NSDictionary *bizResultParams;
@property (nonatomic, readonly) BOOL isParamsModified;
@property (nonatomic, readonly) NSDictionary *modifiedContextParams;

- (id)initWithSuccess:(BOOL)a0 errorMsg:(id)a1 breakNext:(BOOL)a2 ignoreError:(BOOL)a3 bizResultParams:(id)a4 isParamsModified:(BOOL)a5 modifiedContextParams:(id)a6;
- (void).cxx_destruct;
- (id)init;

@end
