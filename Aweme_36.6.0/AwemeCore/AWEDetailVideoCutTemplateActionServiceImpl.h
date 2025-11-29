@class AWEDetailVideoCutTemplateViewModel, AWEDetailVideoCutTemplateTracker, NSString;

@interface AWEDetailVideoCutTemplateActionServiceImpl : NSObject <AWEDetailActionService>

@property (retain, nonatomic) AWEDetailVideoCutTemplateViewModel *stateContext;
@property (retain, nonatomic) AWEDetailVideoCutTemplateTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDVideocutVCommonAdapterClass;

@end
