@class QQApiMiniProgramObject, QQApiObject, ArkObject;

@interface QQApiMessage : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) QQApiObject *object;
@property (retain, nonatomic) ArkObject *arkObject;
@property (nonatomic) BOOL isSupportArk;
@property (retain, nonatomic) QQApiMiniProgramObject *miniObject;

+ (id)messageWithObject:(id)a0 andType:(unsigned long long)a1;
+ (id)messageWithArkObject:(id)a0 andType:(unsigned long long)a1;
+ (id)messageWithMiniObject:(id)a0 andType:(unsigned long long)a1;
+ (id)messageWithObject:(id)a0;

- (id)initWithArkObject:(id)a0 andType:(unsigned long long)a1;
- (id)initWithMiniObject:(id)a0 andType:(unsigned long long)a1;
- (id)initWithObject:(id)a0 andType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
