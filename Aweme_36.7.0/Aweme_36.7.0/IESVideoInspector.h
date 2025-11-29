@class NSOperationQueue, NSString;

@interface IESVideoInspector : NSObject <IESAVAssetAsynchronousLoaderDelegate>

@property (retain, nonatomic) NSOperationQueue *opQueue;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

@end
