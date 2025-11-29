@class NSUUID, NSString;

@interface RTVLiveCommunicationKitReportContext : NSObject

@property (retain, nonatomic) NSUUID *callUUID;
@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL isVideo;
@property (retain, nonatomic) NSString *ringtoneFileName;

- (void).cxx_destruct;
- (id)description;

@end
