@class NSString;

@interface IESLiveInteractXPlayVideoEncoderConfig : NSObject <IESLiveXPlayVideoEncoderConfigProtocol>

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long fps;
@property (nonatomic) long long maxBitrate;
@property (nonatomic) long long minBitrate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
