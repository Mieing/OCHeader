@class NSString, NSNumber, NSDictionary;

@interface IESLivePublishHighlightJSBParamObject : NSObject

@property (copy, nonatomic) NSString *vidoID;
@property (copy, nonatomic) NSString *vidoURL;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *roomTimeStr;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fragmentID;
@property (copy, nonatomic) NSDictionary *shoppingExtras;
@property (copy, nonatomic) NSString *promotionID;

- (void).cxx_destruct;

@end
