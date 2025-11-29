@class NSString;

@interface IESLiveAnchorPFListItem : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long order;
@property (copy, nonatomic) id /* block */ viewProvider;
@property (copy, nonatomic) id /* block */ viewHeightProvider;
@property (copy, nonatomic) id /* block */ onItemTapped;
@property (copy, nonatomic) id /* block */ onItemAppear;
@property (copy, nonatomic) id /* block */ onItemDisAppear;

- (void).cxx_destruct;

@end
