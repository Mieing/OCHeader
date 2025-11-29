@interface RfxPagFile : NSObject {
    id _impl;
}

+ (id)Load:(id)a0;
+ (id)Load:(const void *)a0 size:(unsigned long long)a1;

- (id)initWithImpl:(id)a0;
- (id)impl;
- (void)dealloc;
- (long long)duration;
- (long long)width;
- (long long)height;
- (id)audioBytes;
- (long long)audioStartTime;
- (void)setText:(id)a0 forAllTextLayersWithName:(id)a1;
- (void)resetTextForAllTextLayersWithName:(id)a0;
- (id)copyOriginal;

@end
