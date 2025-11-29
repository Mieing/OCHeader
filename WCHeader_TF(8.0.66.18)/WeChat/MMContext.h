@class NSRecursiveLock, NSString, MMServiceCenter, MMLongLink, MMExtensionCenter;

@interface MMContext : NSObject <CommonAffContext> {
    unsigned long long m_contextType;
    unsigned int m_uin;
    char m_uinStr[32];
    NSString *m_userName;
    unsigned long long m_userState;
    NSString *m_userMd5;
    NSString *m_userDocumentPath;
    NSString *m_userLibraryCachePath;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } m_marsContext;
    MMLongLink *m_marsLongLink;
}

@property (class, nonatomic, readonly) NSString *CancelAllMMTasksNotification;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MMServiceCenter *serviceCenter;
@property (readonly, nonatomic) MMExtensionCenter *extensionCenter;
@property (retain, nonatomic) id mainController;
@property (retain, nonatomic) NSRecursiveLock *contextLock;
@property (readonly, nonatomic) BOOL isRootContext;
@property (readonly, nonatomic) BOOL isUserContext;
@property (readonly, nonatomic) BOOL isInvalidContext;

+ (id)contextFromTask;
+ (void)initialize;
+ (void)initContextEnvironment;
+ (id)currentContext;
+ (id)lastContext;
+ (id)rootContext;
+ (id)activeUserContext;
+ (void)push:(id)a0;
+ (void)pop:(id)a0;
+ (void)setContext:(id)a0 atIndex:(unsigned long long)a1;
+ (unsigned int)currentUin;
+ (BOOL)isLoggedIn;
+ (const char *)currentUinStrForLog;
+ (unsigned long long)currentUserType;
+ (unsigned long long)maxUserType;
+ (void)addUserType:(unsigned long long)a0;
+ (void)removeUserType:(unsigned long long)a0;
+ (BOOL)currentUserTypeHas:(unsigned long long)a0;
+ (id)currentUserName;
+ (id)currentUserMd5;
+ (id)currentUserDocumentPath;
+ (id)currentUserLibraryCachePath;

- (id)getService:(Class)a0;
- (BOOL)isServiceExist:(Class)a0;
- (void)removeService:(Class)a0;
- (void)setService:(id)a0 for:(Class)a1;
- (id)unsafeGetServiceWrapper:(Class)a0;
- (BOOL)enableTask;
- (void)startNetworking;
- (void)stopNetworking;
- (void *)marsContext;
- (void *)marsLongLinkName;
- (void)registerExtension:(id)a0 withTarget:(id)a1;
- (void)unRegisterExtension:(id)a0 withTarget:(id)a1;
- (void)registerExtension:(id)a0 withKey:(id)a1 withTarget:(id)a2;
- (void)unRegisterExtension:(id)a0 withKey:(id)a1 withTarget:(id)a2;
- (void)unRegisterAllKeyExtension:(id)a0 withTarget:(id)a1;
- (void)callExtension:(id)a0 selector:(SEL)a1 block:(id /* block */)a2;
- (void)callKeyExtension:(id)a0 key:(id)a1 selector:(SEL)a2 block:(id /* block */)a3;
- (void)callExtensionOnMainThread:(id)a0 selector:(SEL)a1 sync:(BOOL)a2 block:(id /* block */)a3;
- (void)callKeyExtensionOnMainThread:(id)a0 key:(id)a1 selector:(SEL)a2 sync:(BOOL)a3 block:(id /* block */)a4;
- (void)callExtensionContinuously:(id)a0 selector:(SEL)a1 block:(id /* block */)a2;
- (void)callKeyExtensionContinuously:(id)a0 key:(id)a1 selector:(SEL)a2 block:(id /* block */)a3;
- (void)callExtensionOnMainThreadContinuously:(id)a0 selector:(SEL)a1 sync:(BOOL)a2 block:(id /* block */)a3;
- (void)callKeyExtensionOnMainThreadContinuously:(id)a0 key:(id)a1 selector:(SEL)a2 sync:(BOOL)a3 block:(id /* block */)a4;
- (unsigned int)getUin;
- (id)getUinStr;
- (id)affContext;
- (id)init;
- (id)initWithContextType:(unsigned long long)a0;
- (void)setUin:(unsigned int)a0 userName:(id)a1;
- (void)setLongLink:(id)a0;
- (id)longLink;
- (void)checkExistExtensionIfNeeded;
- (unsigned int)uin;
- (id)userName;
- (id)userMd5;
- (id)userDocumentPath;
- (id)userLibraryCachePath;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
