@interface OMJAssetInfoStatistics : NSObject {
    struct SharedPtr<XMJAssetInfoStatistics> { struct XMJAssetInfoStatistics *_ptr; } _backingAssetInfoStatistics;
}

- (void)dealloc;
- (id)init;
- (void)addMediaFiles:(id)a0 fromScene:(long long)a1 isFinal:(BOOL)a2;
- (void)removeFinalMediaFiles;
- (void)removeAllMediaFilesFromScene:(long long)a0;
- (void)removeMediaFiles:(id)a0 fromScene:(long long)a1;
- (void)reset;
- (id)toBinaryBuffer;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
