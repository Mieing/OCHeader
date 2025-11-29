@class NSString;

@interface AWEIMKeyForPlaceholderWrapper : NSObject <AWEIMImageProtocol>

@property (copy, nonatomic) NSString *keyForPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithKey:(id)a0;

- (void).cxx_destruct;

@end
