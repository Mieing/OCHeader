@class NSString, AWERecordModeFactoryImpl, AWEStudioRepoIMModel;

@interface AWEIMRecorderModeFactoryImpl : NSObject <ACCRecordModeFactory>

@property (retain, nonatomic) AWERecordModeFactoryImpl *factory;
@property (retain) AWEStudioRepoIMModel *imModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modeWithIdentifier:(long long)a0;
- (id)displayModesArray;
- (id)imPlayModesArray;
- (id)p_mixedMode;
- (void).cxx_destruct;

@end
