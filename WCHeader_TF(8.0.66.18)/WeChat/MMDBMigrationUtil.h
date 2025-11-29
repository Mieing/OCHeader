@class NSString;

@interface MMDBMigrationUtil : MMUserService <MMServiceProtocol> {
    NSString *m_flagPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (unsigned long long)readValueFromFile;
- (BOOL)isFlagFinished:(unsigned long long)a0;
- (void)setFlagFinished:(unsigned long long)a0;
- (void).cxx_destruct;

@end
