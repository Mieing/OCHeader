@class ACCSequenceAlbumHandler, NSString;

@interface ACCTrimCropSlidesPieceAdder : NSObject <ACCTrimCropPieceAddProtocol>

@property (retain, nonatomic) ACCSequenceAlbumHandler *albumHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPieceWithWorkSpace:(id)a0 serviceProvider:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
