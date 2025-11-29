@interface WCMetalResourceDeallocHelper : NSObject {
    unsigned long long m_fakePointer;
}

- (void)dealloc;

@end
