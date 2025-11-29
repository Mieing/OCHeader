@class NSString;

@interface AWEStudioCutSameConfigDouyin : NSObject <AWECutSameConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelCreateCutSameMVVideo;
- (void)createCutSameMVTemplateWithTemplateId:(id)a0 withInfo:(id)a1 completion:(id /* block */)a2;
- (void)createCutSameMVVideoWithTemplateId:(id)a0 assetPathList:(id)a1 withInfo:(id)a2 progressBlock:(id /* block */)a3 completion:(id /* block */)a4;

@end
