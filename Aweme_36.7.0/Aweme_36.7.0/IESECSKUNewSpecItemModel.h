@class NSString, IESECSKUSpecItemInfo, UIColor;

@interface IESECSKUNewSpecItemModel : NSObject

@property (copy, nonatomic) NSString *picURL;
@property (nonatomic) long long specImageType;
@property (retain, nonatomic) IESECSKUSpecItemInfo *specItem;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) UIColor *atmosphereColor;
@property (nonatomic) BOOL specShowImageAndPrice;

- (void).cxx_destruct;

@end
