@interface MMExtensionImplememter : NSObject {
    void *m_observerToExtensionObject;
}

@property (readonly, nonatomic) void *extensionObjectList;

- (id)init;
- (void)dealloc;
- (BOOL)registerExtension:(id)a0;
- (BOOL)unregisterExtension:(id)a0;
- (BOOL)needsCleanUp;
- (void)cleanUp;

@end
