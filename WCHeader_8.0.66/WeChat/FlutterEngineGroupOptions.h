@class NSString, NSArray, NSNumber;

@interface FlutterEngineGroupOptions : NSObject

@property (copy, nonatomic) NSString *entrypoint;
@property (copy, nonatomic) NSString *libraryURI;
@property (copy, nonatomic) NSString *initialRoute;
@property (copy, nonatomic) NSArray *entrypointArgs;
@property (copy, nonatomic) NSNumber *sharedIsolateMode;
@property (nonatomic) BOOL isolatedFontCollection;

- (void).cxx_destruct;

@end
