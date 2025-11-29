@class NSString, NSDictionary;

@interface MMWebViewControllerShareData : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSDictionary *reportExtInfo;
@property (copy, nonatomic) NSString *fromScene;
@property (copy, nonatomic) NSString *floatBallTitle;

- (id)description;
- (void).cxx_destruct;

@end
