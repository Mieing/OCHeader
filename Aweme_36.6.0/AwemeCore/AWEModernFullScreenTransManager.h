@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEModernFullScreenTransManager : NSObject <AWEModernFullScreenTransManagerProtocol>

@property (nonatomic) BOOL isTransition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getHorizontalFitContentModeWithEndViewSize:(struct CGSize { double x0; double x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)sharedManager;

@end
