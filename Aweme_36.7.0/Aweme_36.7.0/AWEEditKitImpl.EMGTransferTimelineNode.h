@class NSString;
@protocol AEKEditMediaGenreTransferContext;

@interface AWEEditKitImpl.EMGTransferTimelineNode : NSObject <AEKEditMediaGenreTransferNode> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_enable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_endHandler;
    void /* function */ subscriber;
}

@property (nonatomic, readonly) id<AEKEditMediaGenreTransferContext> execContext;
@property (nonatomic) BOOL enable;
@property (nonatomic, readonly) BOOL isStart;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) id /* block */ subscriber;

- (void).cxx_destruct;
- (id)init;
- (void)begin;

@end
