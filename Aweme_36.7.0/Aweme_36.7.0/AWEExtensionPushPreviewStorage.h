@class NSArray, NSMutableArray;

@interface AWEExtensionPushPreviewStorage : AWEExtensionStorage

@property (retain, nonatomic) NSMutableArray *options;
@property (readonly, nonatomic) NSArray *pushPreviewOptions;
@property (readonly, nonatomic) BOOL isKeepPushs;

+ (id)sharedPushPreviewStorage;
+ (unsigned long long)previewTypeFromOption:(id)a0;

- (void)addPushPreviewOption:(id)a0 previewType:(unsigned long long)a1;
- (id)pushPreviewUrlKey;
- (id)keepPushsFlagKey;
- (void)trackPushPreviewWithOption:(id)a0 previewType:(unsigned long long)a1;
- (void)updateKeepPushsFlag:(BOOL)a0;
- (void).cxx_destruct;
- (void)reset;

@end
