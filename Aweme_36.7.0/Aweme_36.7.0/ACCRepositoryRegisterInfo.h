@class Protocol;

@interface ACCRepositoryRegisterInfo : NSObject <NSCopying>

@property (weak, nonatomic) ACCRepositoryRegisterInfo *childNode;
@property (weak, nonatomic) ACCRepositoryRegisterInfo *superNode;
@property (nonatomic) long long type;
@property (retain, nonatomic) Class bindedClassInfo;
@property (retain, nonatomic) Protocol *changeDispatcherProtocol;
@property (readonly, nonatomic) Class classInfo;
@property (readonly, nonatomic) Protocol *dataProtocol;
@property (readonly, nonatomic) long long scope;

- (id)initWithClassInfo:(Class)a0;
- (BOOL)isWorkspaceType;
- (id)realInfo;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
