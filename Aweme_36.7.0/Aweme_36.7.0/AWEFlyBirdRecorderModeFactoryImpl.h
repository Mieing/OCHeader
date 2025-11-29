@class NSString, AWERecordModeFactoryImpl;

@interface AWEFlyBirdRecorderModeFactoryImpl : NSObject <ACCRecordModeFactory>

@property (retain, nonatomic) AWERecordModeFactoryImpl *factory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modeWithIdentifier:(long long)a0;
- (id)displayModesArray;
- (void).cxx_destruct;

@end
