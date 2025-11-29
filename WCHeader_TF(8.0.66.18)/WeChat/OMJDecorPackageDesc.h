@class NSString;

@interface OMJDecorPackageDesc : NSObject {
    struct SharedPtr<XMJDecorPackageDesc> { struct XMJDecorPackageDesc *_ptr; } _backingDecorPackageDesc;
}

@property (readonly, nonatomic) NSString *packageID;

+ (id)emptyDesc;

- (id)initWithBackingDecorPackageDesc:(const void *)a0;
- (const void *)backingDecorPackageDesc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
