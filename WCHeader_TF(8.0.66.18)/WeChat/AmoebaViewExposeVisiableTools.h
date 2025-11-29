@class NSNumber, NSMapTable, NSString;

@interface AmoebaViewExposeVisiableTools : NSObject <AmoebaViewExposeExt>

@property (retain, nonatomic) NSMapTable *testMarkViews;
@property (retain, nonatomic) NSNumber *testMarkViewSwitch;
@property (nonatomic) unsigned long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)isTestMarkViewSwitch;
- (void)onViewExpose:(id)a0 checkType:(unsigned long long)a1;
- (void)onViewUnExpose:(id)a0 checkType:(unsigned long long)a1;
- (void)onVCExpose:(id)a0 checkType:(unsigned long long)a1;
- (void)onVCUnExpose:(id)a0 checkType:(unsigned long long)a1;
- (void)setViewExposeVisiableToolsSwitch:(BOOL)a0;
- (void)removeView:(id)a0;
- (void).cxx_destruct;

@end
