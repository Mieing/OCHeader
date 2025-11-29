@class NSString;

@interface IlinkLogService : MMRootService <MMServiceProtocol> {
    NSString *app_dir_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iLinkPath;

@end
