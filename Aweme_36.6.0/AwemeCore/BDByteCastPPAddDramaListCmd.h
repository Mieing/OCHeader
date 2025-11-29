@class NSArray, NSString;

@interface BDByteCastPPAddDramaListCmd : BDByteCastPPCmd

@property (copy, nonatomic) NSArray *dramaBeans;
@property (copy, nonatomic) NSString *insertBeforeDramaId;

+ (id)cmd;
+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
