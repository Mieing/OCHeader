@class NSString;

@interface AWEStrongAssociatedObjectWrapper : NSObject <NSCoding, AWEAssociatedObjectWrapperProtocol> {
    id _object;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)object;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setObject:(id)a0;

@end
