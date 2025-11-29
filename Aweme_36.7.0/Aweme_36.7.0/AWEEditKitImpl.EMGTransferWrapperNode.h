@class NSString;
@protocol AEKEditMediaGenreTransferContext;

@interface AWEEditKitImpl.EMGTransferWrapperNode : NSObject <AEKEditMediaGenreTransferNode> {
    void /* function */ name;
    void /* unknown type, empty encoding */ taskExecutor;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_endHandler;
    void /* function */ subscriber;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) BOOL isStart;
@property (nonatomic) BOOL enable;
@property (nonatomic, readonly) id<AEKEditMediaGenreTransferContext> execContext;
@property (nonatomic, copy) id /* block */ subscriber;

- (void).cxx_destruct;
- (id)init;
- (void)begin;

@end
