@class AWEBtmModel, NSString;

@interface AWEBtmModelAndTokenWrapper : NSObject

@property (retain, nonatomic) AWEBtmModel *btmModel;
@property (copy, nonatomic) NSString *sourceBtmToken;

+ (id)initWithBtmModel:(id)a0;
+ (id)initWithSourceBtmToken:(id)a0;

- (void).cxx_destruct;

@end
