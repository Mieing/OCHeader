@class NSMutableDictionary;

@interface BDSCButton : UIButton

@property (retain, nonatomic) NSMutableDictionary *imageRequests;
@property (retain, nonatomic) NSMutableDictionary *backgroundImageRequests;
@property (retain, nonatomic) NSMutableDictionary *imageMap;
@property (nonatomic) double forceImageScaleAspectSize;

- (void)setImageWithNamed:(id)a0 forState:(unsigned long long)a1;
- (void)setImageWithNamed:(id)a0 backupImageNamed:(id)a1 forState:(unsigned long long)a2;
- (BOOL)shouldChangeImageSize;
- (void)updateImageSizeIfNeeded;
- (void)setBackgroundImageWithNamed:(id)a0 forState:(unsigned long long)a1;
- (id)controlStates;
- (void).cxx_destruct;

@end
