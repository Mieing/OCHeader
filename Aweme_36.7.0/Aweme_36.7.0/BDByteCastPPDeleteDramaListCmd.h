@class NSArray;

@interface BDByteCastPPDeleteDramaListCmd : BDByteCastPPCmd

@property (copy, nonatomic) NSArray *dramaIds;

+ (id)cmd;

- (void).cxx_destruct;

@end
