@class NSString;

@interface MMLiveSEIConnectMicUserInfo : NSObject

@property (retain, nonatomic) NSString *uId;
@property (nonatomic) unsigned int us;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double w;
@property (nonatomic) double h;
@property (nonatomic) unsigned long long z;
@property (nonatomic) unsigned long long f;
@property (nonatomic) unsigned long long i;
@property (nonatomic) unsigned long long mt;

- (void)updateWithMicUserInfo:(id)a0;
- (BOOL)isTalking;
- (BOOL)isAudioMode;
- (BOOL)isOtherAnchor;
- (BOOL)isInOtherRoom;
- (BOOL)isMicMutedByAnchor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedUserFrame;
- (unsigned long long)uiType;
- (void).cxx_destruct;

@end
