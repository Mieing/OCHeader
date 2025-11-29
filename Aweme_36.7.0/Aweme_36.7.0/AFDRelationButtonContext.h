@class NSString, UIView;

@interface AFDRelationButtonContext : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long channelID;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;
@property (copy, nonatomic) NSString *lightActionSource;
@property (copy, nonatomic) NSString *lightActionEnterMethod;
@property (weak, nonatomic) UIView *actionDestinationView;
@property (weak, nonatomic) UIView *actionContainerView;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
