@class NSNumber;

@interface BackStickerInfo : StickerInfo

@property (retain, nonatomic) NSNumber *segType;

- (id)initWithParam:(id)a0;
- (BOOL)isValidSegType;
- (id)getDic;
- (void).cxx_destruct;

@end
