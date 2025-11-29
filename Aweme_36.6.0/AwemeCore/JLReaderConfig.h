@interface JLReaderConfig : NSObject

@property (nonatomic) int cardInfoState;
@property (nonatomic) int voucher;
@property (nonatomic) int compositeCardPhoto;

+ (id)sharedInstance;

@end
