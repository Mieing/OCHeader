@class NSArray, NSAttributedString;

@interface IESLiveDanmakuGiftViewModel : NSObject

@property (retain, nonatomic) NSAttributedString *content;
@property (nonatomic) unsigned long long giftPrice;
@property (nonatomic) unsigned long long groupCount;
@property (nonatomic) unsigned long long comboCount;
@property (copy, nonatomic) NSArray *giftImageURLs;
@property (nonatomic) double giftImageSize;
@property (nonatomic) double height;

- (void).cxx_destruct;

@end
