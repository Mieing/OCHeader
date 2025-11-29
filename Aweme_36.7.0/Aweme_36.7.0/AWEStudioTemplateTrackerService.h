@class NSString;

@interface AWEStudioTemplateTrackerService : NSObject <AWEStudioTemplateTrackerServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mvTypeStringFromMVType:(long long)a0 isImageTemplate:(BOOL)a1;
- (id)generateOriginMVTypeStringFromMVType:(long long)a0;

@end
