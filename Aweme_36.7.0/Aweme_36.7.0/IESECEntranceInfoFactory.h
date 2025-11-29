@class NSString, IESECEntranceInfoScene, IESECEntranceInfo, IESECEntranceInfoChecker;

@interface IESECEntranceInfoFactory : NSObject <IESECEntranceInfoFactory> {
    IESECEntranceInfo *_entranceInfo;
    IESECEntranceInfoChecker *_checker;
    IESECEntranceInfoScene *_scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)putAll:(id)a0;
- (void)putIf:(id)a0 condition:(id /* block */)a1;
- (id)initWithEntranceInfo:(id)a0;
- (void).cxx_destruct;
- (void)deleteAll:(id)a0;

@end
