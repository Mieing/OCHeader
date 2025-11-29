@class NSString, NSArray, RTVRoomSyncRequestData;
@protocol RTVRoomSyncDataWrapper, Optional;

@interface RTVRoomSyncCommand : JSONModel <RTVXRRoomMessageContent>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSArray<RTVRoomSyncDataWrapper> *syncDataContainers;
@property (retain, nonatomic) RTVRoomSyncRequestData<Optional> *requestData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (long long)messageType;

- (long long)messageMethod;
- (long long)sendChannel;
- (id)initWithUserID:(id)a0 roomID:(id)a1;
- (void)updateDataContainers:(id)a0;
- (void)setSyncDataContainersWithNSString:(id)a0;
- (void).cxx_destruct;

@end
