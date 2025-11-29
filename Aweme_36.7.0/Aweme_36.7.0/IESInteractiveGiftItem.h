@class NSArray, NSString;

@interface IESInteractiveGiftItem : NSObject

@property (nonatomic) long long giftId;
@property (retain, nonatomic) NSArray *imageURL;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *priceUnit;
@property (nonatomic) unsigned long long selectedMode;

- (id)initWithGiftStruct:(id)a0;
- (void).cxx_destruct;

@end
