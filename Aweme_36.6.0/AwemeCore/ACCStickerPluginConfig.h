@class NSString;

@interface ACCStickerPluginConfig : NSObject <ACCStickerPluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)priorityWithClass:(Class)a0;
+ (id)resortPluginPriority:(id)a0;


@end
