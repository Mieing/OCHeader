@class NSString, AVAsset;

@interface WCUIKit.SpatialMediaUtil : NSObject

+ (BOOL)isSpatialImageWithPath:(id)a0;
+ (BOOL)isSpatialImageWithData:(id)a0;
+ (void)isSpatialVideoWithPath:(NSString *)a0 completionHandler:(void (^)(BOOL))a1;
+ (void)isSpatialVideoWithAsset:(AVAsset *)a0 completionHandler:(void (^)(BOOL))a1;

- (id)init;

@end
