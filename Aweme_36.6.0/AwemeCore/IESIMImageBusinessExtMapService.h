@class NSLock, NSMutableDictionary, NSString;

@interface IESIMImageBusinessExtMapService : HTSService <IESIMImageBusinessExtMapService>

@property (retain) NSMutableDictionary *extMap;
@property (retain, nonatomic) NSLock *extLock;
@property (retain, nonatomic) NSLock *processLock;
@property (retain) NSMutableDictionary *processMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordSharedImageLocalID:(id)a0 withExt:(id)a1;
- (id)tryGetExtForLocalID:(id)a0;
- (void)recordProcessService:(id)a0 forAnchorType:(unsigned long long)a1;
- (id)getProcessServiceForAnchorType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
