@class NSArray, NSString;

@interface WCDeepCleanDBVacuum : NSObject <IDeepCleanClassProtocol> {
    NSArray *m_vacuumInfos;
}

@property (readonly, nonatomic) NSArray *vaccumInfos;
@property (nonatomic) unsigned long long freeSize;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) float progressLevel;
@property (nonatomic) float lastProgress;
@property (nonatomic) BOOL bCleanning;
@property (nonatomic) BOOL bStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFreeSize:(unsigned long long)a0;
- (void)refreshState;
- (unsigned long long)getChatLogDBVacuumSize;
- (unsigned long long)getOtherDataDBVacuumSize;
- (void)stop;
- (unsigned long long)getClassSize;
- (void)cleanData;
- (void).cxx_destruct;

@end
