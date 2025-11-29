@class NSString;

@interface TextStatePublishParameter : NSObject <PBCoding>

@property (nonatomic) BOOL preserveLastPrivacy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_preserveLastPrivacy;
+ (void)initialize;
+ (id)defaultParameter;

- (id)getPBPropertyTable;

@end
