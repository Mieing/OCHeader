@class NSString, NSMutableDictionary;

@interface UTIGlobalVar : NSObject {
    struct dispatch_queue_s { } *mMethodQueue;
    NSMutableDictionary *mGlobalReserves;
}

@property (retain) NSString *mCurrentPageName;
@property (retain) NSString *mH5PrePageName;
@property (retain) NSString *mH5Url;
@property BOOL mIsH5MethodCalled;
@property BOOL mTurnOffCrashHandler;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)getInstance;

- (void)addGlobalReserves:(id)a0;
- (struct dispatch_queue_s { } *)methodDispatchSerialQueue;
- (id)getGlobalReserves;
- (void)clearGlobalReserves;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
