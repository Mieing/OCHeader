@class NSString;
@protocol IESLiveDIContext;

@interface IESLiveAAIGamePacket : NSObject <IESLiveAAIGamePacketDelegate>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *connectId;
@property (nonatomic) long long seq;
@property (nonatomic) BOOL isFromUpdate;
@property (retain, nonatomic) id<IESLiveDIContext> attachingDIContext;
@property (nonatomic) unsigned long long msgType;
@property (nonatomic) unsigned long long msgContentType;
@property (retain, nonatomic) id metaData;
@property (nonatomic) long long portNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long timeStamp;
@property (copy, nonatomic) NSString *packetPath;
@property (nonatomic) BOOL isStamp;

- (void)uploadLog;
- (id)logMsg;
- (void)updatePacketPathNodeText:(id)a0;
- (id)packetCopy;
- (void).cxx_destruct;

@end
