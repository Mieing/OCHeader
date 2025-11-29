@class NSString;

@interface AWESequenceChooseFrameService : NSObject <ACCSequenceAlbumChooseFrameServiceProtocol>

@property (nonatomic) BOOL isSelectPicFrame;
@property (nonatomic) BOOL isSelectVideoFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateIsSelectPicFrame:(BOOL)a0;
- (void)updateIsSelectVideoFrame:(BOOL)a0;

@end
