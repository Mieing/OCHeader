@class NSString;

@interface WAAppBrandNotifyModuleState : NSObject <PBCoding>

@property (nonatomic) BOOL isAlreadyDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_isAlreadyDownload;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
