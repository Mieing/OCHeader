@class NSString, IESLiveLinkRTCInteractSourceCropInfo;

@interface IESLiveLinkRTCInteractPublicStreamRegion : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *alternateImage;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long zOrder;
@property (nonatomic) double alpha;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long streamType;
@property (nonatomic) unsigned long long renderMode;
@property (retain, nonatomic) IESLiveLinkRTCInteractSourceCropInfo *sourceCrop;

- (void).cxx_destruct;

@end
