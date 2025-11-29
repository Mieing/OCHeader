@interface UnisusPackageImpl : NSObject <UnisusPackage> {
    void *_pkg;
}

- (void)read:(id)a0 done:(id /* block */)a1;
- (id)readSync:(id)a0;
- (id)initWithPackage:(void *)a0;
- (void)dealloc;

@end
