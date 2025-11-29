@class NSString;

@interface AWETuringUIHelperUtils : NSObject <BDTuringUIHelperDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setSupportOrientation:(unsigned long long)a0;
- (unsigned long long)getCurrentSupportOrientation;

@end
