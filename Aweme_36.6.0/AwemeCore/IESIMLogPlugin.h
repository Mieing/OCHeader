@class NSArray, NSString;
@protocol IESIMLogPluginDelegate;

@interface IESIMLogPlugin : NSObject <TIMXAppIMLogProtocol, TIMXLogService>

@property (copy, nonatomic) NSArray *trackerWhiteList;
@property (copy, nonatomic) NSArray *monitorWhiteList;
@property (copy, nonatomic) NSArray *serviceWhiteList;
@property (weak, nonatomic) id<IESIMLogPluginDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)logMessage:(id)a0 withLevel:(unsigned long long)a1 withTag:(id)a2 withFileName:(id)a3 withFuncName:(id)a4 withLine:(int)a5 withInstance:(id)a6;
- (void)logService:(id)a0 name:(id)a1 data:(id)a2;
- (id)convertToJsonDict:(id)a0;
- (void)logMessage:(id)a0 withLevel:(unsigned long long)a1 withTag:(id)a2 withFileName:(id)a3 withFuncName:(id)a4 withLine:(int)a5;
- (void).cxx_destruct;
- (id)init;

@end
