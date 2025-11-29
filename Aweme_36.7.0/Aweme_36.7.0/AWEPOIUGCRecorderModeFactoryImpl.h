@class NSString, AWERecordModeFactoryImpl, AWEVideoPublishViewModel;

@interface AWEPOIUGCRecorderModeFactoryImpl : NSObject <ACCRecordModeFactory>

@property (retain, nonatomic) AWERecordModeFactoryImpl *factory;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
