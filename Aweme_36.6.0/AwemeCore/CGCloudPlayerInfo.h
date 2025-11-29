@class NSString;

@interface CGCloudPlayerInfo : NSObject <XPlayCloudPlayerInfo>

@property (nonatomic) BOOL isMain;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *clientUserId;
@property (copy, nonatomic) NSString *remoteUserId;
@property (copy, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
