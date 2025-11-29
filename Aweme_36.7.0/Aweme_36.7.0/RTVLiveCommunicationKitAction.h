@class NSUUID, NSString;

@interface RTVLiveCommunicationKitAction : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSUUID *callUUID;
@property (retain, nonatomic) NSUUID *actionUUID;
@property (retain, nonatomic) NSString *roomID;
@property (nonatomic) BOOL value;
@property (copy, nonatomic) id /* block */ fullFillCallBack;

- (void).cxx_destruct;
- (id)description;
- (id)actionString;

@end
