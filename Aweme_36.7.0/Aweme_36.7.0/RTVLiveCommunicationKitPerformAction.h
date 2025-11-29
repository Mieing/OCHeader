@class NSUUID;

@interface RTVLiveCommunicationKitPerformAction : NSObject

@property (nonatomic) long long performType;
@property (retain, nonatomic) NSUUID *callUUID;
@property (nonatomic) BOOL value;

- (void).cxx_destruct;
- (id)description;
- (id)actionString;

@end
