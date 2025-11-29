@class LynxTemplateData, NSString, NSMutableDictionary, LynxGroup;
@protocol LynxMediaResourceFetcher, LynxGenericResourceFetcher, LynxTemplateResourceFetcher;

@interface LynxBackgroundRuntimeOptions : NSObject {
    struct unique_ptr<lynx::piper::ModuleFactoryDarwin, std::default_delete<lynx::piper::ModuleFactoryDarwin>> { struct ModuleFactoryDarwin *__ptr_; } _moduleWrapperContainer;
    NSMutableDictionary *_providers;
}

@property (retain, nonatomic) LynxGroup *group;
@property (nonatomic) long long backgroundJsRuntimeType;
@property (retain, nonatomic) LynxTemplateData *presetData;
@property (nonatomic) BOOL enableBytecode;
@property (retain, nonatomic) NSString *bytecodeUrl;
@property (retain, nonatomic) LynxTemplateData *globalProps;
@property (retain, nonatomic) id<LynxGenericResourceFetcher> genericResourceFetcher;
@property (retain, nonatomic) id<LynxMediaResourceFetcher> mediaResourceFetcher;
@property (retain, nonatomic) id<LynxTemplateResourceFetcher> templateResourceFetcher;
@property (nonatomic) BOOL pendingCoreJsLoad;

- (void)registerModule:(Class)a0 param:(id)a1;
- (void)addLynxResourceProvider:(id)a0 provider:(id)a1;
- (id)moduleWrappers;
- (BOOL)enableJSGroupThread;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })groupThreadName;
- (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; void *x2; })preloadJSPath;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })bytecodeUrlString;
- (void).cxx_destruct;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })groupID;
- (id)initWithOptions:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void)merge:(id)a0;
- (id)providers;
- (void)registerModule:(Class)a0;

@end
