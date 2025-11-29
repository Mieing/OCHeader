@class NSString, NSArray, BDByteCastPPPlayControlInfo;

@interface BDByteCastPPPlayCmd : BDByteCastPPCmd

@property (copy, nonatomic) NSString *connectId;
@property (copy, nonatomic) NSString *startDramaId;
@property (copy, nonatomic) NSArray *dramaBeans;
@property (retain, nonatomic) BDByteCastPPPlayControlInfo *playControlInfo;

+ (id)cmd;

- (void).cxx_destruct;

@end
