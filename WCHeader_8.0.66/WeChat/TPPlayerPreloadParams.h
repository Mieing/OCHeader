@class FlutterStandardTypedData;

@interface TPPlayerPreloadParams : NSObject

@property (nonatomic) long long commentScene;
@property (retain, nonatomic) FlutterStandardTypedData *mediaProto;

+ (id)makeWithCommentScene:(long long)a0 mediaProto:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
