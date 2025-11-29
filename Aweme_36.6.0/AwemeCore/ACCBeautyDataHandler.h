@class NSString;
@protocol ACCBeautyComponentConfigProtocol;

@interface ACCBeautyDataHandler : NSObject <AWEComposerBeautyDataHandleProtocol>

@property (retain, nonatomic) id<ACCBeautyComponentConfigProtocol> beautyConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
