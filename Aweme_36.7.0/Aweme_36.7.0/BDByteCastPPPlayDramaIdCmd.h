@class NSString;

@interface BDByteCastPPPlayDramaIdCmd : BDByteCastPPCmd

@property (copy, nonatomic) NSString *connectId;
@property (copy, nonatomic) NSString *startDramaId;

+ (id)cmd;

- (void).cxx_destruct;

@end
