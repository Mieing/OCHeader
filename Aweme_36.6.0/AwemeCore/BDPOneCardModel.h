@class NSDictionary, NSString, UIView;

@interface BDPOneCardModel : NSObject

@property (retain, nonatomic) UIView *oneCardView;
@property (nonatomic) long long oneCardWidthMode;
@property (nonatomic) long long oneCardHeightMode;
@property (retain, nonatomic) NSDictionary *componentDict;
@property (copy, nonatomic) id /* block */ oneCardCallback;
@property (copy, nonatomic) NSString *customID;

- (void).cxx_destruct;

@end
