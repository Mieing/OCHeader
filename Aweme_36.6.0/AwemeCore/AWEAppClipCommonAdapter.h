@class NSString;

@interface AWEAppClipCommonAdapter : NSObject <AWEAppClipCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)getAppClipGDLable;
- (id)weakTarget;

@end
