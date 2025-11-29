@class NSString;

@interface IESECLiveAPIBaseRequest : NSObject <IESECLiveAPIBaseRequest>

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) long long sceneType;
@property (copy, nonatomic) NSString *apiPath;
@property (nonatomic) BOOL optEntranceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildParams;
- (void).cxx_destruct;

@end
