@class NSMapTable, NSTimer, BDSHViewComponent, NSDictionary;

@interface BDSHSpanEngine : NSObject {
    struct shared_ptr<Sheo::RuntimeEngine> { struct RuntimeEngine *__ptr_; struct __shared_weak_count *__cntrl_; } _engine;
    struct unique_ptr<std::list<std::pair<double, std::function<void ()>>>, std::default_delete<std::list<std::pair<double, std::function<void ()>>>>> { void *__ptr_; } _videoTimerList;
    struct unique_ptr<std::vector<std::pair<std::string, std::function<void (const char *, unsigned long)>>>, std::default_delete<std::vector<std::pair<std::string, std::function<void (const char *, unsigned long)>>>>> { void *__ptr_; } _loadTemplateList;
}

@property (retain, nonatomic) BDSHViewComponent *rootComponent;
@property (retain, nonatomic) NSMapTable *componentMaps;
@property (copy, nonatomic) id /* block */ eventLoadBlock;
@property (copy, nonatomic) id /* block */ contentSizeBlock;
@property (copy, nonatomic) id /* block */ getCustomComponentBlock;
@property (copy, nonatomic) id /* block */ debugLogBlock;
@property (retain, nonatomic) NSTimer *videoTimer;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (copy, nonatomic) id /* block */ callBridge;
@property (copy, nonatomic) NSDictionary *componentData;
@property (copy, nonatomic) id /* block */ videoCreateBlock;

+ (id)p_getObjectWithValue:(const void *)a0;
+ (struct Value { int x0; struct variant<double, bool, std::string, std::shared_ptr<std::vector<Sheo::Value>>, std::shared_ptr<std::unordered_map<std::string, Sheo::Value>>, std::shared_ptr<std::function<Sheo::Value (std::vector<Sheo::Value> &&)>>> { struct __impl<double, bool, std::string, std::shared_ptr<std::vector<Sheo::Value>>, std::shared_ptr<std::unordered_map<std::string, Sheo::Value>>, std::shared_ptr<std::function<Sheo::Value (std::vector<Sheo::Value> &&)>>> { union __union<std::__variant_detail::_Trait::_Available, 0UL, double, bool, std::string, std::shared_ptr<std::vector<Sheo::Value>>, std::shared_ptr<std::unordered_map<std::string, Sheo::Value>>, std::shared_ptr<std::function<Sheo::Value (std::vector<Sheo::Value> &&)>>> { char x0; struct __alt<0UL, double> { double x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, bool, std::string, std::shared_ptr<std::vector<Sheo::Value>>, std::shared_ptr<std::unordered_map<std::string, Sheo::Value>>, std::shared_ptr<std::function<Sheo::Value (std::vector<Sheo::Value> &&)>>> { char x0; struct __alt<1UL, bool> { BOOL x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL, std::string, std::shared_ptr<std::vector<Sheo::Value>>, std::shared_ptr<std::unordered_map<std::string, Sheo::Value>>, std::shared_ptr<std::function<Sheo::Value (std::vector<Sheo::Value> &&)>>> { char x0; struct __alt<2UL, std::string> { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 3UL, std::shared_ptr<std::vector<Sheo::Value>>, std::shared_ptr<std::unordered_map<std::string, Sheo::Value>>, std::shared_ptr<std::function<Sheo::Value (std::vector<Sheo::Value> &&)>>> { char x0; struct __alt<3UL, std::shared_ptr<std::vector<Sheo::Value>>> { struct shared_ptr<std::vector<Sheo::Value>> { void *x0; struct __shared_weak_count *x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 4UL, std::shared_ptr<std::unordered_map<std::string, Sheo::Value>>, std::shared_ptr<std::function<Sheo::Value (std::vector<Sheo::Value> &&)>>> { char x0; struct __alt<4UL, std::shared_ptr<std::unordered_map<std::string, Sheo::Value>>> { struct shared_ptr<std::unordered_map<std::string, Sheo::Value>> { void *x0; struct __shared_weak_count *x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 5UL, std::shared_ptr<std::function<Sheo::Value (std::vector<Sheo::Value> &&)>>> { char x0; struct __alt<5UL, std::shared_ptr<std::function<Sheo::Value (std::vector<Sheo::Value> &&)>>> { struct shared_ptr<std::function<Sheo::Value (std::vector<Sheo::Value> &&)>> { void *x0; struct __shared_weak_count *x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 6UL> { } x2; } x2; } x2; } x2; } x2; } x2; } x0; unsigned int x1; } x0; } x1; })p_getValueWithObject:(id)a0;
+ (id)p_getObjectWithKeyPath:(const void *)a0 origin:(id)a1;

- (void)updateLayoutWithWidth:(double)a0 height:(double)a1;
- (void)sendEventWithName:(id)a0 params:(id)a1;
- (void)updateRootComponentSize:(struct CGSize { double x0; double x1; })a0;
- (id)getCustomComponentWithCustomType:(id)a0 extra:(id)a1;
- (BOOL)loadTemplateWithData:(id)a0;
- (void)setGlobalWithData:(id)a0 props:(id)a1;
- (void)sendInitializationEvent;
- (void)applyLayoutWithWidth:(double)a0 height:(double)a1 widthMode:(long long)a2 heightMode:(long long)a3;
- (BOOL)renderViewComponents;
- (void)registerEventLoadBlock:(id /* block */)a0;
- (void)registerCallBridge:(id /* block */)a0;
- (void)registerContentSizeBlock:(id /* block */)a0;
- (void)registerCustomComponentBlock:(id /* block */)a0;
- (void)registerDebugLogBlock:(id /* block */)a0;
- (void)p_eventLoadCallback:(long long)a0 eventInfo:(id)a1;
- (void)setTextContentCallback;
- (void)setVideoTimerCallback;
- (void)setLoadTemplateCallback;
- (BOOL)p_createComponentTree;
- (void)triggerLoadTemplate;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;

@end
