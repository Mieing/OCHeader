@class NSNumber;

@interface LynxReloadBundleEntry : LynxPipelineEntry

@property (retain, nonatomic) NSNumber *reloadBundleStart;
@property (retain, nonatomic) NSNumber *reloadBundleEnd;
@property (retain, nonatomic) NSNumber *reloadBackgroundStart;
@property (retain, nonatomic) NSNumber *reloadBackgroundEnd;
@property (retain, nonatomic) NSNumber *ffiStart;
@property (retain, nonatomic) NSNumber *ffiEnd;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
