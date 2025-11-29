@class NSString;

@interface WCAdSubscriptionHeadInfo : NSObject

@property (retain, nonatomic) NSString *headImageUrl;
@property (retain, nonatomic) NSString *nickname;

+ (id)fetchDefaultSubscriptionHeadInfoForDataItem:(id)a0;

- (void).cxx_destruct;

@end
