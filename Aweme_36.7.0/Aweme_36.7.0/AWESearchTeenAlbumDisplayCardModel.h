@class NSString, NSNumber;

@interface AWESearchTeenAlbumDisplayCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSNumber *orientation;
@property (retain, nonatomic) NSNumber *itemNum;
@property (retain, nonatomic) NSNumber *playCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
