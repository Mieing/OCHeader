@class MMLiteAppViewController, NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface MMFinderLiveLiteAppPreviewPlugin : NSObject <MMFinderLiveLiteAppPreviewViewFactoryDataSource, FlutterPlugin>

@property (weak, nonatomic) NSObject<FlutterBinaryMessenger> *messenger;
@property (weak, nonatomic) MMLiteAppViewController *liteApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithRegistrar:(id)a0;

- (void)instanceRegisterWithRegistrar:(id)a0;
- (void).cxx_destruct;

@end
