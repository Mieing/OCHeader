@class NSString, NSMutableDictionary, HTSLivePicoInfo_MultiStreamInfo, HTSLivePicoInfo_VirtualLiveBgImages;

@interface HTSLivePicoInfo : IESLivePBBaseMessage

@property (nonatomic) long long picoLiveType;
@property (copy, nonatomic) NSString *picoVirtualLiveBgImageUri;
@property (copy, nonatomic) NSString *picoCreateScene;
@property (copy, nonatomic) NSString *customInfo;
@property (copy, nonatomic) NSString *picoVirtualLiveBgImageDigest;
@property (retain, nonatomic) HTSLivePicoInfo_VirtualLiveBgImages *virtualLiveBgImages;
@property (nonatomic) BOOL hasVirtualLiveBgImages;
@property (nonatomic) float pitch;
@property (nonatomic) long long clientLiveType;
@property (nonatomic) int picoVrTransfer;
@property (nonatomic) long long picoLiveMode;
@property (retain, nonatomic) NSMutableDictionary *streamMapping;
@property (readonly, nonatomic) unsigned long long streamMapping_Count;
@property (retain, nonatomic) HTSLivePicoInfo_MultiStreamInfo *multiStreamInfo;
@property (nonatomic) BOOL hasMultiStreamInfo;

+ (id)descriptor;

- (id)virtualLiveBgImages;

@end
