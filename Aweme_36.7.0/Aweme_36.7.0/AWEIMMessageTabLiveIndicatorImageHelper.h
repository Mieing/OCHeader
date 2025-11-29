@class UIImage, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMMessageTabLiveIndicatorImageHelper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) UIImage *ringImage;
@property (retain) UIImage *statusBGImage;
@property (retain, nonatomic) NSHashTable *subscribers;

+ (id)shared;

- (struct CGSize { double x0; double x1; })statusLabelBGSize;
- (void)subscribeImage:(id)a0;
- (void)handleThemeDidChangeNoti;
- (void)p_subscribeRingImage:(id)a0;
- (void)p_subscribeStatusBGImage:(id)a0;
- (id)p_generateStatusLabelBGImage;
- (id)p_generateLiveStatusRingImage;
- (void).cxx_destruct;
- (id)init;

@end
