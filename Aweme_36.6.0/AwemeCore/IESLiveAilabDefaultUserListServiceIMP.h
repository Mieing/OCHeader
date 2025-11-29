@class NSString;
@protocol AFDMentionAilabDefaultUserListDataControllerProtocol;

@interface IESLiveAilabDefaultUserListServiceIMP : NSObject <IESLiveAilabDefaultUserListService>

@property (retain, nonatomic) id<AFDMentionAilabDefaultUserListDataControllerProtocol> dataContraller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchAilabDefaultUserListCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
