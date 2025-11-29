@class NSString;

@interface RecordPermissionCheckMgr : MMUserService <MMServiceProtocol> {
    int m_CheckPermissionFlag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CheckRecordPermission;
- (void)callRecordPermissioned;
- (void)callRecordDenied;

@end
