@class Protocol;

@interface AWEArchUniqueID : NSObject

@property (nonatomic) long long ID;
@property (retain, nonatomic) Class expectedDataClass;
@property (nonatomic) Protocol *expectedProtocol;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDataClass:(Class)a0;

@end
