@class AUCDTOInputConfigTrackInfo, NSArray;

@interface AUCDTOInputConfig : NSObject

@property (retain, nonatomic) AUCDTOInputConfigTrackInfo *trackInfo;
@property (copy, nonatomic) NSArray *pageFlow;

- (void).cxx_destruct;
- (id)init;

@end
