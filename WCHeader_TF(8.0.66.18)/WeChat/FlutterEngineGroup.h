@class FlutterEngine, NSString, NSPointerArray, FlutterDartProject;

@interface FlutterEngineGroup : NSObject {
    FlutterEngine *_rootEngine;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSPointerArray *engines;
@property (copy, nonatomic) FlutterDartProject *project;
@property (nonatomic) unsigned long long enginesCreatedCount;
@property (nonatomic) BOOL sharedIsolateMode;

- (id)initWithName:(id)a0 project:(id)a1;
- (id)initWithName:(id)a0 project:(id)a1 sharedIsolateMode:(BOOL)a2;
- (id)makeEngineWithEntrypoint:(id)a0 libraryURI:(id)a1;
- (id)makeEngineWithEntrypoint:(id)a0 libraryURI:(id)a1 initialRoute:(id)a2;
- (id)makeEngineWithEntrypoint:(id)a0 libraryURI:(id)a1 initialRoute:(id)a2 isolatedFontCollection:(BOOL)a3;
- (id)makeEngineWithOptions:(id)a0;
- (id)makeEngine;
- (void).cxx_destruct;

@end
