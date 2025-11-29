@class NSDictionary, NSString;

@interface AWEPublishBrushEditParamProvider : NSObject <AWEPublishTrackParamProvider>

@property (retain, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
