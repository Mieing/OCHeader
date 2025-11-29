@class NSString, IESECBTMModel;

@interface IESECBtmModelAndTokenWrapper : NSObject

@property (retain, nonatomic) IESECBTMModel *btmModel;
@property (copy, nonatomic) NSString *sourceBtmToken;

+ (id)initWithBtmModel:(id)a0;
+ (id)initWithSourceBtmToken:(id)a0;

- (void).cxx_destruct;

@end
