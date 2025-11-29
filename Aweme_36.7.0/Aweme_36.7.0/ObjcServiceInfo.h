@interface ObjcServiceInfo : NSObject

@property (retain, nonatomic) Class clazz;
@property (nonatomic) void *userInfo;

- (void).cxx_destruct;

@end
