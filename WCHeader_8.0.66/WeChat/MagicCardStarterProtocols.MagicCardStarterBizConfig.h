@class NSString;

@interface MagicCardStarterProtocols.MagicCardStarterBizConfig : NSObject {
    void /* unknown type, empty encoding */ bizName;
}

@property (nonatomic, copy) NSString *bizName;
@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ singleRootConfig;
@property (nonatomic) void /* unknown type, empty encoding */ autoDestroyTime;

- (id)initWithBizName:(id)a0 singleRootConfig:(id)a1 delegate:(id)a2 autoDestroyTime:(double)a3;
- (void)toString;
- (id)init;
- (void).cxx_destruct;

@end
