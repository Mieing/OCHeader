@class NSString;

@interface AFDMomentTabEntryConfig : NSObject <AFDMomentTabEntryProtocol>

@property (nonatomic) unsigned long long actionType;
@property (nonatomic) BOOL hasCameraIcon;
@property (nonatomic) BOOL hasDefaultIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithInfo:(id)a0;
- (id)initWithInfo:(id)a0;

@end
