@class NSString;
@protocol IESIMSearchEngineProtocol;

@interface AWELiveUnitedMatrixServiceImpl : NSObject <IESLiveUnitedMatrixService>

@property (retain, nonatomic) id<IESIMSearchEngineProtocol> searchEngine;
@property (copy, nonatomic) id /* block */ completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)joinMatrixWithToken:(id)a0 completed:(id /* block */)a1;
- (void)beginSearchFriend:(id)a0 completed:(id /* block */)a1;
- (void)inviteFriendWith:(id)a0 completed:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
