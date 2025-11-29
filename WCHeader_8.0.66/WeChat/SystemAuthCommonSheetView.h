@class _TtC6WeChat24SystemAuthCapabilityInfo, SystemAuthBizInfo;

@interface SystemAuthCommonSheetView : MMAutoLayoutSheetView

@property (retain, nonatomic) _TtC6WeChat24SystemAuthCapabilityInfo *capabilityInfo;
@property (retain, nonatomic) SystemAuthBizInfo *bizInfo;
@property (nonatomic) BOOL isComplete;
@property (copy, nonatomic) id /* block */ aggreeBlock;
@property (copy, nonatomic) id /* block */ rejectBlock;
@property (copy, nonatomic) id /* block */ ignoreBlock;

- (id)initWithAuthCapability:(unsigned int)a0 scene:(unsigned long long)a1;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)pageSheetDidAppear;
- (void).cxx_destruct;

@end
