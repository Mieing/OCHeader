@interface IESECTabKitInterceptCloseConfig : NSObject <NSCopying>

@property (nonatomic) unsigned long long tabID;
@property (nonatomic) BOOL enableInterceptClose;
@property (nonatomic) unsigned long long interceptCloseTimeout;
@property (nonatomic) unsigned long long interceptCloseAction;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
