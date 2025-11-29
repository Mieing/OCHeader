@class NSString, AWEDPlayerVideoInfoModel, NSArray;

@interface AWEDPlayerVideoModel : NSObject

@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) AWEDPlayerVideoInfoModel *video;
@property (copy, nonatomic) NSArray *remoteVideoUrlArray;
@property (copy, nonatomic) NSArray *localVideoUrlArray;
@property (copy, nonatomic) NSString *videoDecryptionKey;
@property (copy, nonatomic) NSString *encryptedDecryptionKey;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL truncateTailWhenRepeated;
@property (nonatomic) BOOL pictureInPictureSupported;
@property (nonatomic) unsigned long long playerType;

- (void).cxx_destruct;
- (id)init;

@end
