@class NSDictionary, NSString;

@interface AWEStudioFeatureLivePhotoOpenItem : AWEStudioFeatureStatusBaseItem <AWEStudioFeatureLivePhotoOpenItemProtocol>

@property (retain, nonatomic) NSDictionary *defaultOnValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_persistenceKeyWithCustomRecordMode:(long long)a0;
- (id)initWithStorage:(id)a0 persistenceKey:(id)a1 defaultOnValues:(id)a2;
- (void)saveLivePhotoOn:(BOOL)a0 recordMode:(long long)a1;
- (BOOL)isLivePhotoOnWithRecordMode:(long long)a0;
- (void).cxx_destruct;

@end
