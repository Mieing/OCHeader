@class NSString, SAMIVESVCInfoGroup;
@protocol SAMIVESVCTaskProtocol;

@interface SAMIVESVCService : NSObject <SAMIVESVCTaskEventDelegate, SAMIVESVCServiceProtocol>

@property (retain, nonatomic) NSString *rootPath;
@property (retain, nonatomic) id<SAMIVESVCTaskProtocol> curTask;
@property (retain, nonatomic) SAMIVESVCInfoGroup *curGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWithInfos:(id)a0 config:(id)a1 spkID:(id)a2 initBlock:(id /* block */)a3 enablePreviewBlock:(id /* block */)a4 progressBlock:(id /* block */)a5 infoCompletion:(id /* block */)a6 completion:(id /* block */)a7;
- (void)stopCurrentGroup;
- (void)onGroupStart:(id)a0;
- (void)onInfoStart:(id)a0 ofGroup:(id)a1;
- (void)onInfoProgressUpdate:(id)a0 ofGroup:(id)a1 curMS:(unsigned long long)a2 totalMS:(unsigned long long)a3;
- (void)onInfoComplete:(id)a0 ofGroup:(id)a1;
- (void)onGroupComplete:(id)a0;
- (void)onError:(id)a0 ofInfo:(id)a1 group:(id)a2;
- (void).cxx_destruct;

@end
