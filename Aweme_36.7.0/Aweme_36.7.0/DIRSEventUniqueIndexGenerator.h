@class NSString, NSCountedSet;

@interface DIRSEventUniqueIndexGenerator : NSObject {
    NSString *sectionKey;
    _Atomic long long sectionIndex;
    NSCountedSet *counted;
}

- (id)sectionForEvent:(id)a0;
- (long long)currentIndexForSection:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
