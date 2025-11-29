@class NSString;

@interface GCPannelItem : NSObject

@property (retain, nonatomic) NSString *iconImage;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ didSelectBlock;

- (void).cxx_destruct;

@end
