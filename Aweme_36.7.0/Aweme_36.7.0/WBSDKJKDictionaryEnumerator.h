@interface WBSDKJKDictionaryEnumerator : NSEnumerator {
    id collection;
    unsigned long long nextObject;
}

- (id)initWithWBSDKJKDictionary:(id)a0;
- (id)nextObject;
- (id)allObjects;
- (void)dealloc;

@end
