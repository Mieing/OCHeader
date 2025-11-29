@class NSString;

@interface AWEAllScreenAdaptionVideoFirstFrameView : UIImageView <ALMIESVideoPlayerExtraViewProtocol>

@property (nonatomic) long long positionType;
@property (nonatomic) double xRelativeProportion;
@property (nonatomic) double yRelativeProportion;
@property (nonatomic) double widthRelaiveProportion;
@property (nonatomic) double heightRelativeProportion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0;

@end
