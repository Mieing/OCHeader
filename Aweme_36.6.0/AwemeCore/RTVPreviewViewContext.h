@class RTVPreviewViewConfiguration;
@protocol RTVSessionPreviewProcotol;

@interface RTVPreviewViewContext : NSObject

@property (readonly, nonatomic) RTVPreviewViewConfiguration *configuration;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;

+ (id)contextWithSession:(id)a0 configuration:(id)a1;
+ (id)contextWithSession:(id)a0;

- (void).cxx_destruct;

@end
